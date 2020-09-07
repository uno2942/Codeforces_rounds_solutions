/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t, n;
	long long temp;
	vector<long long> arr_candy;
	vector<long long> arr_orange;
	vector<long long> ans;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long orange_min = 100000000000000ll;
		long long candy_min = 100000000000000ll;
		long long ans_t = 0;
		arr_candy.clear();
		arr_orange.clear();
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr_candy.push_back(temp);
			candy_min = min(candy_min, temp);
		}
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr_orange.push_back(temp);
			orange_min = min(orange_min, temp);
		}

		for (int j = 0; j < n; j++)
		{
			ans_t += ((arr_candy[j] - candy_min) + (arr_orange[j] - orange_min) - min(arr_candy[j] - candy_min, arr_orange[j] - orange_min));
		}
		ans.push_back(ans_t);
	}
	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
*/