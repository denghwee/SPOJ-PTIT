#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	while ( true )
	{
		cin >> n;
		if ( n == 0 )
		{
			return 0;
		}
		if ( n <= 1000000 )
		{
			cout << n << endl;
		}
		else if ( n > 1000000 && n <= 5000000 )
		{
			cout << n - n*10/100 << endl;
		}
		else
		{
			cout << n - n*20/100 << endl;
		}
	}
}
