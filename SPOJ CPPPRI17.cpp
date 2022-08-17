#include <bits/stdc++.h>
using namespace std;

bool dayso[1000001];

void sangnguyento() {
    for(int i = 0 ; i <= 1000000 ; i++)
	{
        dayso[i] = true;
    }
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i <= 1000000 ; i++)
	{
        if( dayso[i] == true )
		{
            for(int j = i * 2 ; j <= 1000000 ; j += i)
            {
                dayso[j] = false;
            }
        }
    }
}

int main() {
	sangnguyento();
	int t;
	cin >> t;
	while ( t-- )
	{
		long long l, r, res = 0;
		cin >> l >> r;
		for (int i = (int) sqrt(l) ; i <= (int) sqrt(r) ; i++)
		{
			if ( dayso[i] == true )
			{
				res++;
			}
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
