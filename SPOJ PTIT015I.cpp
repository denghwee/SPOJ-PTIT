#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, T, count = 0, sum = 0;
		cin >> n >> T;
		int a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			if ( sum <= T )
			{
				sum += a[i];
				count++;
			}
		}
		cout << count - 1;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
