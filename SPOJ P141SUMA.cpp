#include <bits/stdc++.h>
using namespace std;

int main() {
	long long xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	long long CCW = (xb-xa) * (yc-ya) - (xc-xa) * (yb-ya);
	if ( CCW == 0 )
	{
		cout << "TOWARDS";
	}
	else if ( CCW < 0 )
	{
		cout << "RIGHT";
	}
	else
	{
		cout << "LEFT";
	}
}
