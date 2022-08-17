#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, minup = 200000, mindown = 20000, sumup = 0, sumdown = 0;
	cin >> n;
	for (int i = 1 ; i <= n ; i++)
	{
		int a, b;
		cin >> a >> b;
		sumup += a;
		sumdown += b;
		if ( a < minup)
		{
			minup = a;
		}
		if ( b < mindown )
		{
			mindown = b;
		}
	}
	sumup += mindown;
	sumdown += minup;
	if ( sumup < sumdown )
	{
		cout << sumdown;
	}
	else
	{
		cout << sumup;
	}
}
