#include <bits/stdc++.h>
using namespace std;

int b[3001];

int main() {
	int n, max = 0;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
		b[a[i]]++;
		if ( max < a[i] )
		{
			max = a[i];
		}
	}
	for (int i = 1 ; i <= max + 1; i++)
	{
		if ( b[i] == 0 )
		{
			cout << i;
			return 0;
		}
	}
	cout << n + 1;
}
