/*#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

long long n;
long long temp;
vector<long long> arr;
int main()
{
	scanf("%lld", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &temp);
		arr.push_back(temp);
	}

	if (n == 1)
	{
		if(arr[0] != -2)
			printf("1 1\n1\n1 1\n1\n1 1\n%lld", -(arr[0] + 2));
		else
			printf("1 1\n2\n1 1\n1\n1 1\n%lld", -(arr[0] + 3));
		return 0;
	}

	printf("%d %d\n", 1, 1);
	printf("%lld\n", n - arr[0]);
	arr[0] = n;
	printf("%d %lld\n", 2, n);
	for (int i = 1; i < n; i++)
	{
		printf("%lld ", arr[i] * (n - 1));
		arr[i] = arr[i] + (arr[i] * (n - 1));
	}
	printf("\n");

	printf("%d %lld\n", 1, n);
	for (int i = 0; i < n; i++)
	{
		printf("%lld ", -arr[i]);
	}
	return 0;
}
*/