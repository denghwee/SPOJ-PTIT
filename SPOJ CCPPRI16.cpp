#include <bits/stdc++.h>
using namespace std;

vector <bool> dayso(1000001,true);

void sangnguyento() {
    dayso[0] = false;
    dayso[1] = false;
    for (long long i = 2 ; i <= 1000000 ; i++)
	{
        if( dayso[i] == true )
		{
            for(long long j = i*2 ; j <= 1000000 ; j += i)
            {
                dayso[j] = false;
            }
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	sangnguyento();
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n, count = 0;
		cin >> n;
		for (int i = 2 ; i <= sqrt(n) ; i++)
		{
			if ( dayso[i] == true )
			{
				count++;
			}
		}
		cout << count;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
