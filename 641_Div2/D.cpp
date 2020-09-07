#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


bool solve_problem(vector<long long>& arr, long long a, long long b, long long k)
{
	if (a == b)
		return true;
	else if (a + 1 == b && arr[a] == k)
		return true;
	else if (a + 2 == b && arr[a + 1] == k)
		return true;
	long long temp;
	long long l, r;
	for (long long i = a; i < b; i++)
	{
		if (arr[i] == k)
		{
			temp = min(b - i, i - a);
			l = i - temp;
			r = i + temp;
			
		}
	}
}
int main()
{
	long long t, n, k, temp;
	long long l, r;
	vector<long long> arr;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> k;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr.push_back(temp);
		}
		solve_problem(arr, 0, n, k);
		arr.clear();
	}
}