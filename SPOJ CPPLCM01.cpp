#include <bits/stdc++.h>
using namespace std;

long long BCNN(long long a, long long b) {
	return a*b/__gcd(a,b);
}

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		long long a, b;
		cin >> a >> b;
		if ( a == 0 && b == 0 )
		{
			break;
		}
		cout << BCNN(a,b) << " " << __gcd(a,b);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
