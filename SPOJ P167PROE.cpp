#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int count = 1;
		long long n;
		cin >> n;
		for (long long i= 2*n-1; i>n; i--)
		{
        	if ( (i*n) % (i-n) == 0 )
        	{
        		count += 2;
        	}
        }
		cout << count;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
