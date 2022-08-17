#include <bits/stdc++.h>
using namespace std;

int dayso[10000005];

void fibonacci() {
    for (int i = 2 ; i <= 10000000; i++)
	{
        if ( dayso[i] == 0 )
            for (int j = i ; j <= 10000000 ; j+=i)
			{
                dayso[j]++;
            }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    fibonacci();
    int t, tt = 0;
    cin >> t;
    while ( t-- )
	{
        tt++;
        int a, b, k, res = 0;
        cin >> a >> b >> k;
        for (int i = a ; i <= b ; i++)
		{
            if ( dayso[i] == k )
			{
				res++;
			}
        }
        cout << "Case #" << tt << ": " << res;
        if ( t != 0 )
        {
        	cout << endl;
		}
    }
}
