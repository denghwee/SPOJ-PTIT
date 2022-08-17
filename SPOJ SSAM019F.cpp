#include <iostream>
using namespace std;
 
const int mod = 1000000007;
 
int F[1000001];
 
void Fibonacci() {
	F[0] = 0;
    F[1] = 1;
    for(int i = 2 ; i <= 1000 ; i++ )
	{
        F[i] = ( F[i-1] % mod + F[i-2] % mod ) % mod;
    }
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	Fibonacci();
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		cout << F[n];
		if ( t != 0 )
		{
			cout << endl;
		}
	}
} 
