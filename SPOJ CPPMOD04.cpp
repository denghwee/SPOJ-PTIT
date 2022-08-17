#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, k, res = 0;
		cin >> n >> k;
		for (int i = 1 ; i <= n ; i++)
		{
			res += i%k;
		}
		if ( k != res )
		{
			cout << 0;
		}
		else
		{
			cout << 1;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
