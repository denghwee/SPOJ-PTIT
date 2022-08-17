#include <bits/stdc++.h>
using namespace std;

int BCNN(int a, int b) {
	return (a*b)/__gcd(a,b);
}

int main() {
	int n, m, count = 0;
	cin >> n >> m;
	int allparts = BCNN(n,m), sausage_part = allparts / n, people = allparts / m;
	long long tmp = 0;
	for (int i = 1 ; i <= m ; i++)
	{
		while ( tmp < people )
		{
			tmp += sausage_part;
		}
		if ( tmp == people )
		{
			tmp = 0;
		}
		else
		{
			count++;
			tmp -= people;
		}
	}
	cout << count;
}
