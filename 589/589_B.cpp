/*#include<iostream>
#include<algorithm>
#include<vector>
#define MOD 1000000007

using namespace std;

int arr[1000][1000];
int main()
{
	int h, w, temp;
	vector<int> r;
	vector<int> c;

	long long count = 1;
	cin >> h >> w;
	for (int i = 0; i < h; i++)
	{
		cin >> temp;
		r.push_back(temp);
	}
	for (int i = 0; i < w; i++)
	{
		cin >> temp;
		c.push_back(temp);
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < r[i]; j++)
			arr[i][j] = 1;
		if(r[i] < w)
			arr[i][r[i]] = 2;
	}
	for (int j = 0; j < w; j++)
	{
		for (int i = 0; i < c[j]; i++)
			arr[i][j] = 1;
		if(c[j] < h)
			arr[c[j]][j] = 2;
	}

	//check validity
	for (int j = 0; j < w; j++)
	{
		for (int i = 0; i < c[j]; i++)
		{
			if (arr[i][j] != 1)
				goto fail;
		}
		if (c[j] < h && arr[c[j]][j] != 2)
			goto fail;
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < r[i]; j++)
		{
			if (arr[i][j] != 1)
				goto fail;
		}
		if (r[i] < w && arr[i][r[i]] != 2)
			goto fail;
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			if (arr[i][j] == 0)
			{
				count *= 2;
				count %= MOD;
			}
	}

	cout << count;
	return 0;
fail:
	cout << 0;
	return 0;
}
*/