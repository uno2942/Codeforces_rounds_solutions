/*#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	long long t, n, temp;
	vector<long long> arr2;
	vector<long long> ans;

	scanf("%lld", &t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%lld", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%lld", &temp);
			arr2.push_back(temp);
		}
		sort(arr2.begin(), arr2.end());
		if (arr2[0] != arr2[arr2.size() - 1])
			ans.push_back(1);
		else
			ans.push_back(arr2.size());
		arr2.clear();
	}
	for (int i = 0; i < t; i++)
	{
		printf("%lld\n", ans[i]);
	}
}*/