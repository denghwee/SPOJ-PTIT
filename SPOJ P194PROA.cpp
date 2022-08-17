#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, res = 0;
	cin >> n;
	while ( n-- )
	{
		int x, y, z, count = 0;
		cin >> x >> y >> z;
		if ( x == 1 )
		{
			count++;
		}
		if ( y == 1 )
		{
			count++;
		}
		if ( z == 1 )
		{
			count++;
		}
		if ( count >= 2 )
		{
			res++;
		}
	}
	cout << res;
}
