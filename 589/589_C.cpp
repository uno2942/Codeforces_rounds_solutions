#include<iostream>
#include<vector>
#include<algorithm>
#define MOD 1000000007

using namespace std;

bool che[34001];
vector<long long> origin_primes;
vector<long long> dp;
long long multi(long long a, long long n)
{
	long long ans = 1;
	long long i = 1;
	while (n > 0)
	{
		if (n % 2 == 1)
		{
			ans *= dp[i];
			ans %= MOD;
		}
		n /= 2;
		i++;
	}
	return (ans % MOD);
}

void init_dp(long long a)
{
	dp.clear();
	dp.push_back(1);
	long long temp = a;
	for (int i = 1; i < 40; i++)
	{
		dp.push_back(a);
		a *= a;
		a %= MOD;
	}
}
void find_origin_primes()
{
	che[1] = true;
	long long temp;
	for (int i = 2; i < 34000; i++)
	{
		if (che[i] == false)
		{
			temp = i * 2;
			while (temp < 34000)
			{
				che[temp] = true;
				temp += i;
			}
			origin_primes.push_back(i);
		}
	}
}

int main()
{
	long long x, n, count, x_left;
	long long ans = 1;
	bool prime_flag = false;
	cin >> x >> n;
	x_left = x;
	find_origin_primes();

	long long ord, temp;
	for (long long a : origin_primes)
	{
		if (x % a == 0)
		{
			prime_flag = true;
			init_dp(a);
			long long n_temp = n;
			while (n_temp > 0)
			{
				ord = (n_temp / a);
				ord %= (MOD - 1);
				ans *= multi(a, ord);
				ans %= MOD;
				n_temp /= a;
			}
			while (x_left % a == 0)
			{
				x_left /= a;
			}
		}
	}
	x = x_left;
	if (x > 1)
	{
		init_dp(x);
		long long n_temp = n;
		while (n_temp > 0)
		{
			ord = (n_temp / x);
			ord %= (MOD - 1);
			ans *= multi(x, ord);
			ans %= MOD;
			n_temp /= x;
		}
	}
	cout << ans;
	return 0;
}