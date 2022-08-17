#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count = 0, min = 5000000;
    cin >> n;
    for (int i = 0 ; i <= n/3 ; i++)
    {
    	int tmp = n - (i*3);
    	if ( tmp % 5 == 0 )
    	{
    		count = i + tmp/5;
    		if ( count < min )
   			{
				min = count;
			}
		}
	}
    if ( min == 5000000 )
    {
    	cout << -1;
	}
	else
	{
		cout << min;
	}
}
