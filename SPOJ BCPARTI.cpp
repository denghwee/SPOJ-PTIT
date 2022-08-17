#include <bits/stdc++.h>
using namespace std;

int a[1003];

int main() {
	a[1] = 1;
	a[2] = 2;
	int t, tt = 1;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		for (int i = 3 ; i <= n ; i++)
		{
			int tmp = 1;
			for (int j = 1 ; j <= i / 2 ; j++)
			{
				tmp += a[j];
			}
			a[i] = tmp;
		}
		cout << tt++ << " " << a[n];
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
