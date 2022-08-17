#include <bits/stdc++.h>
using namespace std;

int b[10000];

int main() {
	int n, MAX = 0, res = 0;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
		if ( a[i] <= n )
		{
			b[a[i]]++;
		}
		else
		{
			res++;
		}
	}
	for (int i = 1 ; i <= n ; i++)
	{
		while ( b[i] > 1 )
		{
			res++;
			b[i]--;
		}
	}
	cout << res;
}
