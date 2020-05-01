/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool checker(int x)
{
	vector<int> arr;
	while (x >= 1)
	{
		for (int y : arr)
		{
			if (y == (x % 10))
				return false;
		}
		arr.push_back(x % 10);
		x /= 10;
	}
	return true;
}

int main()
{
	int l, r;
	cin >> l >> r;

	for (int i = l; i <= r; i++)
	{
		if (checker(i))
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
*/