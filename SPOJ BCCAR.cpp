#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, max, min;
		cin >> n;
		int a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		max = min = a[0];
		for (int i = 0 ; i < n ; i++)
		{
			if ( max < a[i] )
			{
				max = a[i];
			}
			if ( min > a[i] )
			{
				min = a[i];
			}
		}
		cout << (max-min)*2;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
