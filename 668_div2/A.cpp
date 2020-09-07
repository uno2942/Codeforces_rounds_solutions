/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int t, n, temp;
	vector<int> arr;
	vector<int> F_arr;
	vector<int> ans_temp;
	vector<int> check_ans_temp;
	vector<int> ans[668];
	vector<int> len;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		arr.clear();
		F_arr.clear();
		cin >> n;
		len.push_back(n);
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr.push_back(temp);
		}

		for (int j = 0; j < n - 1; j++)
		{
			F_arr.push_back(arr[j] + arr[j + 1]);
		}
		sort(F_arr.begin(), F_arr.end());

		ans[i].push_back(1);
		for (int k = 0; k < n - 1; k++)
		{
			ans[i].push_back(F_arr[k] - ans[i][k]);
		}
		


		bool flag = false;
		for (int j = 1; j <= n; j++)
		{
			ans_temp.push_back(j);
			check_ans_temp.push_back(j);
			for (int k = 0; k < n-1; k++)
			{
				ans_temp.push_back(F_arr[k] - ans_temp[k]);
				check_ans_temp.push_back(ans_temp[k + 1]);
			}
			sort(check_ans_temp.begin(), check_ans_temp.end());
			bool check = true;
			for (int k = 0; k < n; k++)
			{
				if (check_ans_temp[k] != k)
				{
					check = false;
					break;
				}
			}
			if(check == false)

		}
	}
	

	}
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < len[i]; j++)
			cout << ans[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
*/