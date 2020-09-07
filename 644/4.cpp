#include<iostream>
#include<algorithm>
#include<vector>
#define N 40000
using namespace std;

vector<long long> primes;

bool che[N];

void find_primes()
{
	long long temp;
	che[0] = true;
	che[1] = true;
	for (long long i = 2; i < N; i++)
	{
		if (!che[i])
		{
			primes.push_back(i);
			temp = i + i;
			while (temp < N)
			{
				che[temp] = true;
				temp += i;
			}
		}
	}
}

long long is_prime(long long n, long long k)
{
	for (long long p : primes)
	{
		if (n % p == 0)
			return p;
	}
	return -1;
}
int main()
{
	long long t;
	cin >> t;
	long long n, k;
	long long temp;
	find_primes();
	vector<long long> ans;
	for (int i = 0; i < t; i++)
	{
		long long n_origin;
		vector<long long> arr;
		arr.push_back(1);
		cin >> n >> k;
		n_origin = n;
		if (k >= n)
		{
			ans.push_back(1);
			continue;
		}
		temp = is_prime(n, k);
		while (temp != -1)
		{
			int s = arr.size();
			for (int j = 0; j < s; j++)
			{
				arr.push_back(arr[j] * temp);
			}
			sort(arr.begin(), arr.end());
			arr.erase(unique(arr.begin(), arr.end()), arr.end());
			n /= temp;
			temp = is_prime(n, k);
		}
		if (n != 1)
		{
			temp = n;
			int s = arr.size();
			for (int j = 0; j < s; j++)
			{
				arr.push_back(arr[j] * temp);
			}
			sort(arr.begin(), arr.end());
			arr.erase(unique(arr.begin(), arr.end()), arr.end());
			n /= temp;
		}
		sort(arr.begin(), arr.end());

		long long val = 1;
		for (long long q : arr)
		{
			if (q > k)
				break;
			val = q;
		}

		ans.push_back(n_origin / val);
	}
	for (int i = 0; i < t; i++)
		cout << ans[i] << endl;
	return 0;
}