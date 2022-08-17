#include<bits/stdc++.h>
using namespace std;

int main() {
	int m, n, k, min;
	cin >> m >> n >> k;
	if ( m/2 > n )
	{	
		min = n;
	}
	else
	{
		min = m/2;
	}
	if ( (m+n-(2+1)*min) >= k )
	{
		cout << min;
	}
	else
	{
		while ( min >= 0 && (m+n-(2+1)*min) < k )
		{
			min--;
		}
		cout << min;
	}
} 
