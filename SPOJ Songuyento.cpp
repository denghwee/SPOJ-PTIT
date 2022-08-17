#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0);
	long long n;
	cin >> n;
	if ( n == 1 || n == 0 )
	{
		cout << "NO";
		return 0;
	}
	for (long long i = 2; i*i <= n ; i++)
	{
		if ( n % i == 0 )
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
