#include <bits/stdc++.h>
using namespace std;

int main() {
	while ( true )
	{
		int a, b, c;
		cin >> a >> b >> c;
		if ( a == 0 && b == 0 && c == 0 )
		{
			return 0;
		}
		else if ( a >= b && a >= c )
		{
			if ( b*b + c*c == a*a )
			{
				cout << "right";
			}
			else
			{
				cout << "wrong";
			}
		}
		else if ( b >= a && b >= c )
		{
			if ( a*a + c*c == b*b )
			{
				cout << "right";
			}
			else
			{
				cout << "wrong";
			}
		}
		else
		{
			if ( b*b + a*a == c*c )
			{
				cout << "right";
			}
			else
			{
				cout << "wrong";
			}
		}
		cout << endl;
	}
}
