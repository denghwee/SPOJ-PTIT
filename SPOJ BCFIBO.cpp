#include <iostream>
using namespace std;
 
const int mod = 1000000007;
 
int F[1000001];
 
int Fibonacci(int n){
    for(int i = 2 ; i <= n ; i++ )
	{
        F[i] = ( F[i-1] % mod + F[i-2] % mod ) % mod;
    }
    return 1;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	F[0] = 0;
    F[1] = 1;
    Fibonacci(n);
	cout << F[n];
}
