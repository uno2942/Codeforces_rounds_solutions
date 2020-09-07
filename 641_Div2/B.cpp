/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	long long t, n, m, temp;
	m = 1;
	vector<long long> arr;
	vector<long long> ans;
	long long *dp;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr.push_back(temp);
		}
		dp = new long long[n + 2]();
		dp[n - 1] = 1;
		for (int j = n - 2; j >= 0; j--)
		{
			temp = j + 1;
			while (temp <= n)
			{
				if(j +1 == temp || arr[j]<arr[temp - 1])
					dp[j] = max(1 + dp[temp - 1], dp[j]);
				temp += (j + 1);
			}
			m = max(dp[j], m);
		}
		
		ans.push_back(m);
		delete[] dp;
		arr.clear();
		m = 1;
	}
	for (int i = 0; i < t; i++)
		cout << ans[i] << endl;
	return 0;
}
*/