#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, tong = 0;
		cin >> n;
		if ( n == 1 )
		{
			cout << "1";
		}
		else
		{
			for (long long i = 1 ; i*i < n ; i++)
			{
				if ( n % i == 0 )
				{
					tong += i + n/i;
				}
			}
			if ( sqrt(n) == (int) sqrt(n) )
			{
				tong += (int) sqrt(n);
			}
			cout << tong;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
