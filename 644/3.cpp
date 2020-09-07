/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	long long t;
	vector<bool> ans;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long n, temp;
		long long odd, even;
		odd = 0;
		even = 0;
		vector<long long> arr;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr.push_back(temp);
			if (temp % 2 == 1)
				odd++;
			else
				even++;
		}
		if (odd % 2 == 0 && even % 2 == 0)
			ans.push_back(true);
		else
		{
			bool flag = false;
			sort(arr.begin(), arr.end());
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[j + 1] - arr[j] == 1)
				{
					ans.push_back(true);
					flag = true;
					break;
				}
			}
			if (!flag)
				ans.push_back(false);
		}
	}
	for (int i = 0; i < t; i++)
	{
		if (ans[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
*/