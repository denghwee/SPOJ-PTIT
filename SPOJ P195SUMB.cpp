#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, Ti = 0, Teo = 0;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	int i = 0, j = n - 1;
	while ( true )
	{
		if ( i == j )
		{
			Ti++;
			break;
		}
		if ( abs(i-j) == 1 )
		{
			Ti++;
			Teo++;
			break;
		}
		if ( a[i] < a[j] )
		{
			
			a[j] = a[j] - a[i];
			a[i] = 0;
			i++;
			Ti++;
		}
		else if ( a[i] > a[j] )
		{
			a[i] = a[i] - a[j];
			a[j] = 0;
			j--;
			Teo++;
		}
		else
		{
			a[i] = 0;
			a[j] = 0;
			i++;
			j--;
			Ti++;
			Teo++;
		}
	}
	cout << Ti << " " << Teo;
}
