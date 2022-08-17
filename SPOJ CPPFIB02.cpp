#include <bits/stdc++.h>
using namespace std;
 
long long F[100];
 
void Fibonacci(){
	F[0] = 0;
    F[1] = 1;
    for(int i = 2 ; i < 93 ; i++)
	{
        F[i] = F[i-1] + F[i-2];
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
		long long n;
		cin >> n;
		for (int i = 0 ; i < 93 ; i++)
		{
			if ( F[i] == n )
			{
				cout << "YES";
				break;
			}
			if ( F[i] > n )
			{
				cout << "NO";
				break;
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
