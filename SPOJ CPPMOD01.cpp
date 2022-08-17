#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		long long x, y, p, res = 1;
		cin >> x >> y >> p;
		for (int i = 1 ; i <= y ; i++)
		{
			res = ( res * x ) % p;
		}
		cout << res % p;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
