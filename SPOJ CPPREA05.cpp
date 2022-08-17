#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		int a[n+1];
		a[0] = 0;
		for (int i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
		}
		sort(a,a+n+1);
		for (int i = 1 ; i <= n / 2 ; i++)
		{
			cout << a[n-i+1] << " " << a[i] << " ";
		}
		if ( n % 2 != 0 )
		{
			cout << a[n/2+1];
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
