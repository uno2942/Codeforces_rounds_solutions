/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
	vector<long long> arr;
	vector<long long> ans;
	long long t, n, temp;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		arr.clear();
		long long pos = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> temp;
			if (temp > 0)
				pos += temp;
			else if (temp == 0)
				continue;
			else
			{
				if (pos + temp < 0)
				{
					arr.push_back(pos + temp);
					pos = 0;
				}
				else
					pos += temp;
			}
		}
		int s = arr.size();
		long long sum = 0;
		for (int j = 0; j < s; j++)
		{
			if (arr[j] >= 0)
				break;
			sum -= arr[j];
		}
		ans.push_back(sum);

	}
	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
*/