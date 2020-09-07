/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t, n, k;
	char temp;
	vector<char> arr;
	vector<bool> ans;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int count_0 = 0;
		int count_1 = 0;
		arr.clear();
		cin >> n >> k;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr.push_back(temp);
		}

		for (int j = 0; j < k; j++)
		{
			int pivot = -1;
			int times = 0;
			while (j + times * k < n)
			{
				if (arr[j + times * k] != '?')
				{
					if (pivot != -1 && arr[j+times*k] != pivot)
					{
						ans.push_back(false);
						goto reset;
					}
					pivot = arr[j + times * k];
				}
				times++;
			}

			if (pivot != -1)
			{
				times = 0;
				while (j + times * k < n)
				{
					arr[j + times * k] = pivot;
					times++;
				}
			}
		}

		for (int j = 0; j < k; j++)
		{
			if (arr[j] == '0')
				count_0++;
			else if (arr[j] == '1')
				count_1++;
		}
		if (k - count_0 - count_1 >= abs(count_0 - count_1))
			ans.push_back(true);
		else
			ans.push_back(false);
	reset:;
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