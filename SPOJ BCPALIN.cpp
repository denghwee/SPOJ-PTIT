#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long t;
	cin >> t;
	while ( t-- )
	{
		long long n, a[100]={}, dem = 0, check = 0;
		cin >> n;
		while ( n != 0 )
		{
			a[dem] = n % 10;
			n /= 10;
			dem++;
		}
		for (long long i = 0 ; i < dem ; i++)
		{
			if ( a[i] != a[dem-i-1] )
			{
				check++;
				break;
			}
		}
		if ( check != 0 )
		{
			cout << "NO";
		}
		else
		{
			cout << "YES";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
