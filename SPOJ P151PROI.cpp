#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, tong = 0;
		cin >> n;
		while ( n >= 10 )
		{
			tong = 0;
			int tmp = n;
			while ( tmp != 0 )
			{
				tong += (tmp%10);
				tmp /= 10;
			}
			n = tong;
		}
		cout << n;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
