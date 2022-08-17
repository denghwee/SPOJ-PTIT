#include <bits/stdc++.h>
using namespace std;

int c[1000];

int main() {
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for (int i = 0 ; i < m ; i++)
	{
		cin >> b[i];
		c[b[i]]++;
	}
	for (int i = 0 ; i < n ; i++)
	{
		if ( c[a[i]] != 0 )
		{
			cout << a[i] << " ";
		}
	}
}
