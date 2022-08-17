#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while( t-- )
    {
    	int a, b, c;
    	cin >> a >> b >> c;
    	int x = max(0,(b+c-a+2)/2);
    	cout << max(0, c-x+1);
    	if ( t != 0 )
    	{
    		cout << endl;
		}
	}
}
