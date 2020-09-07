/*#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t;
	long long n, k, temp;
	vector<vector<long long>> ans;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%lld %lld", &n, &k);
		vector<long long> arr;
		vector<long long> temp_arr;
		long long M = -10000000000ll, m = 10000000000ll;
		for (int j = 0; j < n; j++)
		{
			scanf("%lld", &temp);
			arr.push_back(temp);
			M = max(M, temp);
			m = min(m, temp);
		}
		if (n == 1)
		{
			temp_arr.push_back(0);
			ans.push_back(temp_arr);
			continue;
		}

		if (k % 2 == 1)
		{
			for (int j = 0; j < n; j++)
				temp_arr.push_back(M - arr[j]);
		}
		else
		{
			for (int j = 0; j < n; j++)
				temp_arr.push_back(arr[j] - m);
		}
		ans.push_back(temp_arr);
	}
	for (int i = 0; i < t; i++)
	{
		for (long long data : ans[i])
			printf("%lld ", data);
		printf("\n");
	}
}
*/