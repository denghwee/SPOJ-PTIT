#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, m, k;
		cin >> n >> m >> k;
		if ( n <= 145 && m <= 180 - n && k <= 900 - m - n )
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
