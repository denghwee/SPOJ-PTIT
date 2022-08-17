#include <bits/stdc++.h>
using namespace std;

int main() {
	long long y, k, n, res = -1;
	cin >> y >> k >> n;
	for (int i = 0 ; i <= n / k ; i++)
	{
		if ( k * i - y > 0)
		{
			res = k * i - y;
			break;
		}
	}
	if ( res == -1 )
	{
		cout << -1;
		return 0;
	}
	else
	{
		for (long long i = res ; i <= n - y ; i += k)
		{
			cout << i << " ";
		}
	}
}
