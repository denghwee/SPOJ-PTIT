#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

long long n, x, y;
int F[1000];
 
void Fibonacci() {
	F[1] = x;
    F[2] = y;
    for(int i = 3 ; i <= n ; i++ )
	{
        F[i] = ( F[i-1] % mod - F[i-2] % mod ) % mod;
    }
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> x >> y >> n;
	if ( n % 6 == 0 )
	{
		n = 6;
	}
	else
	{
		n %= 6;
	}
	Fibonacci();
	if ( F[n] < 0 )
	{
		F[n] += mod;
	}
	cout << F[n] % mod;
} 
