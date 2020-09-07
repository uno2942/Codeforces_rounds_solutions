/*#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int n;
vector <long long> arr;
long long temp;
long long ans = 100000000001000ll;
int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());

	for (int i = 1; i < 40000; i++)
	{
		temp = 1;
		long long local_ans = 0;
		for (int j = 0; j < n; j++)
		{
			if (temp > 1000000000000000ll)
				break;
			local_ans += abs(arr[j] - temp);
			temp *= i;
		}
		if (temp > 1000000000000000ll)
			continue;
		ans = min(local_ans, ans);
	}

	printf("%lld", ans);
}
*/