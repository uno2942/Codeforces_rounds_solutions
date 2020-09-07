/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	long long t, n, temp, diff;
	cin >> t;
	vector<long long> arr;
	vector<long long> ans;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());
		diff = 1001;
		for (int j = 0; j < n - 1; j++)
		{
			diff = min(diff, (arr[j + 1] - arr[j]));
		}
		ans.push_back(diff);
		arr.clear();
	}
	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
*/