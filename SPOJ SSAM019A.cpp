#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, dem1 = 0, dem2 = 0;
		cin >> n;
		while ( n % 2 == 0 )
		{
			dem2++;
			n /= 2;
		}
		for (int i = 3 ; i <= sqrt(n) ; i++)
		{
			if ( n % i == 0 )
			{
				dem1++;
				n /= i;
			}
		}
		if ( n > 1 )
		{
			dem1++;
		}
		if ( dem1 == 0 )
		{
			cout << dem2;
		}
		else
		{
			cout << dem2+dem1*dem2;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
