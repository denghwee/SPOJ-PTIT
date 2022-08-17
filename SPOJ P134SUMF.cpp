#include <bits/stdc++.h>
using namespace std;

bool dayso[100001];

int sangnguyento(int n, int k) {
	int count = 0;
    for(int i = 0 ; i <= n ; i++)
	{
        dayso[i] = true;
    }
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i <= n ; i++)
	{
        if( dayso[i] == true )
		{
			count++;
			if ( k == count )
            {
           		return i;
			}
            for(int j = i * i ; j <= n ; j += i)
            {
                if ( dayso[j] == true )
                {
                	dayso[j] = false;
                	count++;
                	if ( k == count )
                	{
                		return j;
					}
				}
            }
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	cout << sangnguyento(n,k);
}
