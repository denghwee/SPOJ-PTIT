#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, count = 0;
		cin >> n;
		for (long long i = 1 ; i < sqrt(n) ; i++)
		{
			if ( n % i == 0 )
			{
				if ( i % 2 == 0 )
				{
					count++;
				}
				if ( (n/i) % 2 == 0 )
				{
					count++;
				}
			}
		}
		if ( (int) sqrt(n) == sqrt(n) )
			{
				if ( ( (int) sqrt(n) ) % 2 == 0 )
				{
					count++;
				}
			}
		cout << count;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
