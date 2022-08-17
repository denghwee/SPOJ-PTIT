#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> res;
	int n;
	cin >> n;
	int a[n+1][n+1];
	for (int i = 1 ; i <= n ; i++)
	{
		for (int j = 1 ; j <= n ; j++)
		{
			cin >> a[i][j];
		}
	}
	if ( n == 2 )
	{
		cout << a[1][2]/2 << " " << a[1][2]/2;
	}
	for (int i = 2 ; i < n ; i++)
	{
		int tmp = a[i][i+1] - a[i-1][i+1] + a[i-1][i];
		tmp /= 2;
		res.push_back(tmp);
	}
	int tmp = a[n-1][n] - res[res.size()-1];
	res.push_back(tmp);
	tmp = res[0];
	cout << a[1][2] - res[0] << " ";
	for (int i = 0 ; i < res.size();i++)
	{
		cout << res[i] << " ";
	}
}
