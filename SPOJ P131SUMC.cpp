#include <bits/stdc++.h>
using namespace std;

int main() {
	float a, b, c, d, x, y, z, t, res;
	cin >> a >> b >> c >> d;
	x = abs(a/c-b/d);
	y = abs(c/d-a/b);
	z = abs(d/b-c/a);
	t = abs(b/a-d/c);
	res = max(max(x,y),max(z,t));
	if ( res == x )
	{
		cout << 0;
	}
	else if ( res == y )
	{
		cout << 1;
	}
	else if ( res == z )
	{
		cout << 2;
	}
	else
	{
		cout << 3;
	}
}
