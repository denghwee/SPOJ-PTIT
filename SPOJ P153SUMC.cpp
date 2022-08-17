#include <bits/stdc++.h>
using namespace std;

long long x, y, n;

long long F[10];

void Fibonacci() {
	F[1] = x, F[2] = y;
	for (int i = 3 ; i <= 7 ; i++)
	{
		F[i] = F[i-1] - F[i-2];
	}
}

int main() {
	cin >> x >> y >> n;
	Fibonacci();
	if ( n % 6 == 0 )
	{
		cout << F[6];
	}
	else
	{
		n = n % 6;
		cout << F[n];
	}
}
