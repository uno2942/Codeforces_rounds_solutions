#include<iostream>
#include<vector>
#include<algorithm>
#define N 200001
using namespace std;

vector<long long> primes;
bool flag[N];
long long min1[88];
long long min2[88];

void find_primes()
{
	int temp;
	flag[0] = true;
	flag[1] = true;
	for (int i = 2; i < N; i++)
	{
		if (!flag[i])
		{
			primes.push_back(i);
			temp = i * 2;
			while (temp < N)
			{
				flag[temp] = true;
				temp += i;
			}
		}
	}
}

long long gcd(long long a, long long b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
int main()
{
	long long n, m, temp, count;
	long long sub = 0;
	long long prime_count = -1;
	long long prime_count2 = -1;
	vector<long long> arr;

	for (int i = 0; i < 88; i++)
	{
		min1[i] = 100;
		min2[i] = 100;
	}
	find_primes();


	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	if (n == 2)
	{
		cout << arr[0] * arr[1] / gcd(arr[0], arr[1]);
		return 0;
	}
	//now n>=3
	//there can be 1

	for (int i = 0; i < n; i++)
	{
		//check >=2 numbers
		for (int j = 0; j < 87; j++)
		{
			temp = primes[j];
			count = 0;
			while (arr[i] % temp == 0) ///////
			{
				count++;
				arr[i] /= temp;
			}
			if (min1[j] > count)
			{
				min2[j] = min1[j];
				min1[j] = count;
			}
			else if (min2[j] > count)
				min2[j] = count;
		}
		if (arr[i] != 1)
		{
			if (prime_count == -1)
				prime_count = arr[i];
			else if (prime_count2 == -1 && prime_count != arr[i])
				prime_count2 = arr[i];
		}
	}

	for (int j = 0; j < 87; j++)
	{
		if (min1[j] == 100)
			min1[j] = 0;
		if (min2[j] == 100)
			min2[j] = 0;
	}

	//given n>=3
	long long ans = 1;
	for (int j = 0; j < 87; j++)
	{
		for (int k = 0; k < max(min1[j], min2[j]); k++)
			ans *= primes[j];
	}
	if (prime_count > 0)
	{
		long long c = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % prime_count != 0)
			{
				c++;
			}
		}
		if (c == 0)
			ans *= (prime_count);
		else if (c == 1)
			ans *= prime_count;
		else if (prime_count2 > 0)
		{
			c = 0;
			for (int i = 0; i < n; i++)
			{
				if (arr[i] % prime_count2 != 0)
				{
					c++;
				}
			}
			if (c == 1)
				ans *= prime_count2;
		}
	}
	cout << ans;

	return 0;
}
