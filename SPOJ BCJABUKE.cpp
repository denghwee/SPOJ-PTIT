#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, j, res;
	cin >> n >> m >> j;
	int a[j+1];
	for (int i = 1 ; i <= j ; i++)
	{
		cin >> a[i];
		if ( a[i] >= 1 && a[i] <= m )
		{
			continue;
		}
		else
		{
			res += ( a[i] - m );
		}
	}
	cout << res;
}
