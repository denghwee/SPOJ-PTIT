#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		int dem = 0;
		double n, l, m;
		cin >> n >> l >> m;
		while ( n < m )
		{
			n *= (1+l/100);
			dem++;
		}
		cout << dem;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
