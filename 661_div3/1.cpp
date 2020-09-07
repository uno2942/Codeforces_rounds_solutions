/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t, n, temp;
	vector<int> arr;
	vector<bool> ans;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		bool flag = false;
		arr.clear();
		cin >> n;
		for (int j = 0; j < n; j++) 
		{
			cin >> temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());
		for (int j = 0; j < n-1; j++)
		{
			if (arr[j + 1] - arr[j] > 1)
			{
				ans.push_back(false);
				flag = true;
				break;
			}
		}
		if (!flag)
			ans.push_back(true);
	}
	for (int i = 0; i < t; i++)
	{
		if (ans[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}*/