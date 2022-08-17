#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, count = 0;
	cin >> n >> m;
	while ( n > 0 && m > 0 )
	{
		count++;
		n--;
		m--;
	}
	cout << count << " ";
	if ( n % 2 == 0 || m % 2 == 0 )
	{
		cout << (int) max(n,m) / 2;
	}
}
