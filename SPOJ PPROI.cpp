#include <bits/stdc++.h>
using namespace std;

int c[10000], d[10000];

int main() {
	int n, Max = 0, count = 0;
	cin >> n;
	int a[n], b[n];
	for (int i = 0 ; i < n ; i++)
	{
		int tmp = 0;
		cin >> a[i] >> b[i];
		if ( a[i] == b[i] )
		{
			tmp++;
		}
		if ( tmp == 0 || d[b[i]] == 1 )
		{
			c[a[i]]++;
		}
		d[b[i]] = 1;
		Max = max(Max,a[i]);
	}
	for (int i = 0 ; i < Max ; i++)
	{
		if ( c[i] != 0 )
		{
			if ( d[i] == 1 )
			{
				count++;
			}
		}
	}
	cout << count
}
