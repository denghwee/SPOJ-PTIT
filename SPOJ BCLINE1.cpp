#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	if ( a + b >= n )
	{
		cout << b - n + ( n - a ) + ( n - b );
	}
	else
	{
		cout << b + 1;
	}
}
