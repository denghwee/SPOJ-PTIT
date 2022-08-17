#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string a, b;
	int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
	cin >> a >> b;
	for (int i = a.size() - 1 ; i >= 0 ; i--)
	{
		if ( a[i] == '5' )
		{
			a[i] = '6';
		}
		a1 += ( a[i] - '0' ) * (int) pow(10,a.size()-i-1);
	}
	for (int i = b.size() - 1 ; i >= 0 ; i--)
	{
		if ( b[i] == '5' )
		{
			b[i] = '6';
		}
		b1 += ( b[i] - '0' ) * (int) pow(10,b.size()-i-1);
	}
	for (int i = a.size() - 1 ; i >= 0 ; i--)
	{
		if ( a[i] == '6' )
		{
			a[i] = '5';
		}
		a2 += ( a[i] - '0' ) * (int) pow(10,a.size()-i-1);
	}
	for (int i = b.size() - 1 ; i >= 0 ; i--)
	{
		if ( b[i] == '6' )
		{
			b[i] = '5';
		}
		b2 += ( b[i] - '0' ) * (int) pow(10,b.size()-i-1);
	}
	cout << a2 + b2 << " " << a1 + b1;
}
