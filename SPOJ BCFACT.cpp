#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test;
	while ( true )
	{
		long long n, ketqua = 1;
		cin >> n;
		if ( n == 0 )
		{
			break;
		}
		for (long long i = 1 ; i <= n ; i++)
		{
			ketqua *= i;
		}
		cout << ketqua << endl;
	}
}
