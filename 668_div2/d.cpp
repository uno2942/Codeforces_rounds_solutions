#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[100010];
vector<bool> ans;
int t, n, a, b, da, db, temp1, temp2;
bool visited[100010];
int depth[100010];
int longest_len;
int node_longest;
void long_bfs(int s, bool flag)
{
	longest_len = 0;
	node_longest = s;
	for (int i = 1; i <= n; i++)
	{
		visited[i] = false;
		depth[i] = 0;
	}
	visited[s] = true;
	depth[s] = 0;
	queue<int> q;
	q.push(s);

	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		int size = graph[now].size();
		for (int i = 0; i < size; i++)
		{
			if (!visited[graph[now][i]])
			{
				depth[graph[now][i]] = depth[now] + 1;
				if (depth[graph[now][i]] > longest_len)
					node_longest = graph[now][i];
				longest_len = max(longest_len, depth[graph[now][i]]);
				if (flag && graph[now][i] == b)
				{
					longest_len = depth[graph[now][i]];
					return;
				}
				visited[graph[now][i]] = true;
				q.push(graph[now][i]);
			}
		}
	}

}
int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> a >> b >> da >> db;
		for (int j = 0; j < n - 1; j++)
		{
			cin >> temp1 >> temp2;
			graph[temp1].push_back(temp2);
			graph[temp2].push_back(temp1);
		}

		long_bfs(a, true);
		if (da >= longest_len)
		{
			ans.push_back(false);
			goto end;
		}
		
		long_bfs(1, false);
		long_bfs(node_longest, false);

		
		if (db <= 2 * da || longest_len <= 2 * da)
		{
			ans.push_back(false);
		}
		else
			ans.push_back(true);

	end:
		for (int j = 0; j <= n; j++)
		{
			graph[j].clear();
		}
	}
	for (int i = 0; i < t; i++)
	{
		if (ans[i])
			cout << "Bob" << endl;
		else
			cout << "Alice" << endl;
	}
	return 0;
}