#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, hx = 1;
		cin >> n;
		vector <int> A(n);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> A[i];
			hx = ( hx % mod * A[i] % mod ) % mod;
		}
		int gx = A[0];
		for (int i = 1 ; i < n ; i++)
		{
			gx = __gcd(gx,A[i]);
		}
		long long kq = 1;
		for (int i = 1 ; i <= gx ; i++)
		{
			kq = ( kq % mod * hx % mod ) % mod;
		}
		cout << kq;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
