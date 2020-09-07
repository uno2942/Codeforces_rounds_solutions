#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t, n, temp;
	int sign = 0;
	int c = 0;
	int arr[100];
	vector<int> ans;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 100; j++)
			arr[j] = 0;

		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr[j] = temp;
		}

		//all 1

		bool flag = true;
		while (flag)
		{
			int count = 0;
			flag = false;
			for (int j = 0; j < n; j++)
			{
				if (arr[j] > 1)
					count++;
				if (count == 2)
				{
					flag = true;
					break;
				}
			}
			if (flag == false)
				break;

			for (int j = 0; j < n; j++)
			{
				if (arr[j] > 1 && j != sign)
				{
					arr[j]--;

					sign = j;
					c++;
					break;
				}
			}
		}

		int count_1 = 0;
		int count_n = 0;

		for (int j = 0; j < n; j++)
		{
			if (arr[j] == 1)
				count_1++;
			else
				count_n = arr[j];
		}

		if (count_1 == 0)
		{
			ans.push_back(1);
		}
		else if (count_1 < count_n)
		{
			ans.push_back(c);
		}
		else
		{
			ans.push_back(c + count_1 + count_n);
		}
	}

	for (int i = 0; i < t; i++)
	{
		if (ans[i] % 2 == 1)
			printf("T\n");
		else
			printf("HL\n");
	}
	return 0;
}