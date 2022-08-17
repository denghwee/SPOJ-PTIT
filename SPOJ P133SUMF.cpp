#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ( a > b )
	{
		swap(a,b);
	}
	if ( b > c )
	{
		swap(b,c);
	}
	if ( a > b )
	{
		swap(a,b);
	}
	if( b - a == c - b )
	{
		cout << c+c-b;
	}
	if( c - b < b - a )
	{
		cout << (b+a)/2;
	}
	if( c - b > b - a )
	{
		cout << (b+c)/2;
	}
}
