/*#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	long long arr[40];
	vector<bool> ans;
	string str;

	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			arr[j] = 0;
		}

		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> str;
			for (char c : str)
			{
				arr[c - 'a']++;
			}
		}

		bool local_ans = true;
		for (int j = 0; j < 40; j++)
		{
			if (arr[j] % n != 0)
			{
				local_ans = false;
				break;
			}
		}
		if (local_ans)
			ans.push_back(true);
		else
			ans.push_back(false);

	}
	for (int i = 0; i < t; i++)
	{
		if (ans[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}*/