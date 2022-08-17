#include <bits/stdc++.h>
using namespace std;

int main() {
	long long l1, l2, r1, r2, k, res;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	if ( l1 <= l2 && l2 <= r1 )
	{
		if ( r1 < r2 )
		{
			res = r1 - l2 + 1;
			if ( k >= l2 && k <= r1 )
			{
				res--;
			}
			cout << res;
			return 0;
		}
		else
		{
			res = r2 - l2 + 1;
			if ( k >= l2 && k <= r2 )
			{
				res--;
			}
			cout << res;
			return 0;
		}
	}
	else if ( l1 >= l2 && l1 <= r2 )
	{
		if ( r1 < r2 )
		{
			res = r1 - l1 + 1;
			if ( k >= l1 && k <= r1 )
			{
				res--;
			}
			cout << res;
			return 0;
		}
		else
		{
			res = r2 - l1 + 1;
			if ( k >= l1 && k <= r2 )
			{
				res--;
			}
			cout << res;
			return 0;
		}
	}
	else if ( l1 > r2 || l2 < r1 )
	{
		cout << 0;
	}
}
