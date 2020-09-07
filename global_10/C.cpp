#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int t, n; 
	long long temp;
	vector<long long> ans;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		vector<long long> arr;
		scanf("%d", &n);
		arr.push_back(-1);
		for (int j = 0; j < n; j++)
		{
			scanf("%lld", &temp);
			arr.push_back(temp);
		}
		long long diff = 0;
		int pivot = n;
		while (pivot > 0)
		{
			if (arr[pivot] < arr[pivot - 1])
			{
				int b = pivot;
				while (arr[b] < arr[b - 1])
					b--;
				diff += (arr[b] - arr[pivot]);
				pivot = b;
			}
			else
			{
				pivot--;
			}
		}
		ans.push_back(diff);
	}
	for (int i = 0; i < t; i++)
		printf("%lld\n", ans[i]);
}