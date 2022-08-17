#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int a, m, x = 101;
		cin >> a >> m;
		for (int i = m - 1 ; i >= 0 ; i--)
		{
			if ( (a*i) % m == 1 )
			{
				if ( x > i )
				{
					x = i;
				}
			}
		}
		if ( x == 101 )
		{
			cout << -1;
		}
		else
		{
			cout << x;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
