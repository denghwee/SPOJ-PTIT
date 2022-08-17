#include <bits/stdc++.h>
using namespace std;

void nhiphan(long long n) {
	int a[100];
	int i = 0;
	while ( n > 0 )
	{
		a[i] = n % 2;
		n /= 2;
		i++;
	}
	for (int j = i - 2 ; j >= 0 ; j--)
	{
		if ( a[j] == 0 )
		{
			cout << 4;
		}
		if ( a[j] == 1 )
		{
			cout << 7;
		}
	}
}

int main() {
	long long k;
	cin >> k;
	nhiphan(k+1);
}
