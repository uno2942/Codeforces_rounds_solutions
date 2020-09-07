/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	long long t, n, k, f_n;
	vector<long long> ans;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> k;
		for (int j = 2; j <= n; j++)
		{
			if (n % j == 0)
			{
				f_n = j;
				break;
			}
		}
		n += f_n;
		n += (2 * (k - 1));
		ans.push_back(n);
	}

	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << endl;
	}

	return 0;
}
*/