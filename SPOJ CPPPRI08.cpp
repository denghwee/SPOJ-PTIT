#include <bits/stdc++.h>
using namespace std;

void process() {
	int n, p, res = 0;
	cin >> n >> p;
	for (int i = 2 ; i <= n ; i++)
	{
		int j = i;
		while ( j % p == 0 )
		{
			j /= p;
			res++;
		}
	}
	cout << res;
}

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		process();
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
