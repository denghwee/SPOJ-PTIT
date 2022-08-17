#include <bits/stdc++.h>
using namespace std;

bool dayso[100001];

void sangnguyento() {
    for(int i = 0 ; i <= 100000 ; i++)
	{
        dayso[i] = true;
    }
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i * i <= 100000 ; i++)
	{
        if( dayso[i] == true )
		{
            for(int j = i * i ; j <= 100000 ; j += i)
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
	int tmp = t;
	while ( t-- )
	{
		int n, count = 0;
		cin >> n;
		for (int i = 1 ; i <= n ; i++)
		{
			if ( __gcd(i,n) == 1 )
			{
				count++;
			}
		}
		if ( dayso[count] == true )
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
