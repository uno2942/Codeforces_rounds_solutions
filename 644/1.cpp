/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	long long t, a,b ;
	long long temp;
	vector<long long> ans;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		if (a > b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if (2 * a < b)
			ans.push_back(b * b);
		else
			ans.push_back(4 * a * a);
	}
	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
*/