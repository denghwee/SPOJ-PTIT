#include <bits/stdc++.h>
using namespace std;

long long process(long long xa, long long ya, long long xb, long long yb) {
	long long res = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	return res;
}

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		long long xa, ya, xb, yb, res;
		cin >> xa >> ya >> xb >> yb;
		if ( (ya > 0 && yb > 0) || (ya<0 && yb<0) )
		{
			res = process(xa,-ya,xb,yb);
		}
		else
		{
			res = process(xa,ya,xb,yb);
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
