#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, count = 0;
		cin >> n;
		for (int i = 2 ; i < sqrt(n) ; i++)
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
		if ( sqrt(n) == (int)sqrt(n) && (int)sqrt(n) % 2 == 0 )
		{
			count++;
		}
		if ( n % 2 == 0 )
		{
			count++;
		}
		cout << count;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
