#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long res = 0, MIN = INT_MAX;
	cin >> n;
	long long a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
		res += a[i];
		if ( a[i] % 2 != 0 )
		{
			MIN = min(a[i],MIN); 
		}
	}
	if ( res % 2 == 0 && MIN == INT_MAX )
	{
		cout << 0;
	}
	else if ( res % 2 != 0 )
	{
		cout << res;
	}
	else
	{
		res -= MIN;
		cout << res;
	}
}
