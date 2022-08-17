#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n;
		cin >> n;
		for (long long i = 2 ; i <= n ; i++)
		{
			somu = 0;
			while ( n % i == 0 )
			{
				cout >> i >> " ";
				n /= i;
			}
		}
	}
}
