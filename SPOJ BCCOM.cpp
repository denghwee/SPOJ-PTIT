#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, tmp;
		cin >> n;
		while ( n >= 10 )
		{
			tmp = 0;
			while ( n != 0 )
			{
				tmp += n % 10;
				n /= 10;
			}
			n = tmp;
		}
		cout << n;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
