#include <bits/stdc++.h>
using namespace std;

long long rutgon(long long a, string b) { 
    long long mod = 0; 
    for (int i = 0 ; i < b.length() ; i++) 
    {
    	mod = (mod*10 + b[i] - '0') % a; 
    }
    return mod;
}

long long BCNN(long long a, string b) { 
    long long bignum = rutgon(a, b); 
	return __gcd(a,bignum); 
}

int main() {   
    int t;
    cin >> t;
    while( t-- )
	{ 
        long long a;
        string b;
        cin >> a >> b;  
        cout << BCNN(a, b);
		if ( t != 0 )
		{
			cout << endl;
		}
    }
}
