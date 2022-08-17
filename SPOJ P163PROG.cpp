#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long x;
	cin >> n >> x;
	int res = 0;
	long long count = 1; 
	for (int i = 1 ; i < sqrt(x) ; i++) 
	if ( x % i == 0 )
	{
		if ( x / i <= n )
		{
			res += 2;	
		} 	
	}
	if ( (int)sqrt(x) == sqrt(x) ) 
	{
		res++;
	}
	cout << res; 
}
