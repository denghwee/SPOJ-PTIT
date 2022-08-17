#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		float goc;
		cin >> goc;
		float canh = 2.0 / ( 1.0 - (goc/180.0) );
		int ep = canh;
		if ( ep * 1000 == canh * 1000 )
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
