#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t, n, temp;
	int arr[301];
	vector<int> ans;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 301; j++)
			arr[j] = 0;

		cin >> n;
		if (n == 1)
		{
			cin >> temp;
			ans.push_back(0);
			continue;
		}
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr[temp]++;
		}
		int ans_t = 0;
		for (int j = 0; j <= 100; j++)
		{
			int local_ans = 0;
			for (int k = 0; k <= j && j - k >= k; k++)
			{
				if (j - k != k)
					local_ans += min(arr[j - k], arr[k]);
				else
					local_ans += arr[k]/2;
			}
			ans_t = max(ans_t, local_ans);
		}
		ans.push_back(ans_t);
	}
	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}