#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while ( n-- )
	{
		int x, count = 0;
		cin >> x;
		while ( x >= 500 )
		{
			count++;
			x -= 500;
		}
		while ( x >= 200 )
		{
			count++;
			x -= 200;
		}
		while ( x >= 100 )
		{
			count++;
			x -= 100;
		}
		while ( x >= 50 )
		{
			count++;
			x -= 50;
		}
		while ( x >= 20 )
		{
			count++;
			x -= 20;
		}
		while ( x >= 10 )
		{
			count++;
			x -= 10;
		}
		while ( x >= 5 )
		{
			count++;
			x -= 5;
		}
		while ( x >= 2 )
		{
			count++;
			x -= 2;
		}while ( x >= 1 )
		{
			count++;
			x -= 1;
		}
		cout << count;
		if ( n != 0 )
		{
			cout << endl;
		}
	}
}
