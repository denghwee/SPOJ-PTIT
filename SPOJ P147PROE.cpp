#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt = 0;
	while ( true )
	{
		tt++;
		int n, t, b;
		cin >> n >> t >> b;
		if ( n == 0 && t == 0 && b == 0 )
		{
			return 0;
		}
		t = t % n;
		if ( t == n )
		{
			cout << "Case " << tt << ": Off" << endl;
			continue;
		}
		bool dayso[n+5] = {false};
			for (int i = 1 ; i <= t ; i++)
			{
         		for (int j = i ; j <= n ; j += i)
         		{
         	       	if ( dayso[j] == true )
         			{
         				dayso[j] = false;
					}
					else
					{
						dayso[j] = true;
					}
         		}
    		}
    		if ( dayso[b] == true )
    		{
    			cout << "Case " << tt << ": On" << endl;
			}
			else
			{
				cout << "Case " << tt << ": Off" << endl;
			}
	}
}
