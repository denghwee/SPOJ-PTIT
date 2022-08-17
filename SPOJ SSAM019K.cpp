#include <bits/stdc++.h>
using namespace std;

int congchuso(int a, int b) {
	while ( a != 0 )
	{
		b += ( a % 10 );
		a /= 10;
	}
	return b;
}

int main() {
	long long n, tmp1 = 0, tmp2 = 0;
	cin >> n;
	long long tmp3 = n;
	tmp1 = congchuso(tmp3,tmp1);
	for (int i = 2 ; i <= sqrt(n) ; i++)
	{
		while ( n % i == 0 )
		{
			tmp2 = congchuso(i,tmp2);
			n /= i;
		}
	}
	if ( n > 1 )
	{
		tmp2 = congchuso(n,tmp2);
	}
	if ( tmp1 == tmp2 )
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
