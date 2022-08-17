#include <bits/stdc++.h>
using namespace std;

long long BCNN(long long a, long long b) {
	return a*b/__gcd(a,b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, tmp = 1;
		cin >> n;
		for (long long i = 2 ; i <= n ; i++)
		{
			tmp = BCNN(tmp,i);
		}
		cout << tmp;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
