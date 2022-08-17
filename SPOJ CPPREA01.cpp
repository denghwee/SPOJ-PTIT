#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		long long x;
		cin >> n;
		vector <long long> a(n,-1);
		for (int i = 0 ; i < n ; i++)
		{
			cin >> x;
			if ( x >= 0 && x < n )
			{
				a[x] = x;
			}
		}
		for (int i = 0 ; i < n ; i++)
		{
			cout << a[i] << " ";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
