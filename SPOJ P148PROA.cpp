#include <bits/stdc++.h>
using namespace std;

int main() {
	while ( true )
	{
		int n, dem = 1;
		cin >> n;
		if ( n == 0 )
		{
			return 0;
		}
		else
		{
			while ( n % 2 == 0 )
			{
				dem++;
				n /= 2;
				while ( n % 2 != 0 && n != 1 )
				{
					dem++;
					n = n * 3 + 1;
				}
			}
			while ( n % 2 != 0 && n != 1 )
			{
				dem++;
				n = n * 3 + 1;
				while ( n % 2 == 0 )
				{
					dem++;
					n /= 2;
				}
			}
		}
		cout << dem << endl;
	}
}
