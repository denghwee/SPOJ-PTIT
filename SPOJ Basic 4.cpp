#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	scanf("%lld", &n);
   	for (int i = 2 ; i * i <= n ; i++)
	{
		int somu = 0;
    	while (n % i == 0)
		{
			n /= i;
            somu++;
    	}
    	if ( somu != 0 )
    	{
    		cout << i << " " << somu << endl;
		}
   	}
   	if ( n > 1 )
	{
		cout << n << " " << 1 << endl;
	}
}
