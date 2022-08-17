#include <bits/stdc++.h>
using namespace std;

vector <bool> dayso(10000005,true);

void sangnguyento() {
    dayso[0] = false;
    dayso[1] = false;
    for (long long i = 2 ; i <= 10000005 ; i++)
	{
        if( dayso[i] == true )
		{
            for(long long j = i * i ; j <= 10000005 ; j += i)
            {
                dayso[j] = false;
            }
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	sangnguyento();
	int t, k;
	cin >> t;
	while ( t-- )
	{
		int n, k;
		vector <long long> snt;
		cin >> n >> k;
		for (int i = 1 ; i <= sqrt(n) ; i++)
		{
			if ( dayso[i] == true )
			{
				while ( n % i == 0 )
				{
					n /= i;
					snt.push_back(i);
				}
			}
		}
		if ( n > 1 )
		{
			snt.push_back(n);
		}
		if ( k > snt.size() )
		{
			cout << -1;
		}
		else
		{
			cout << snt[k-1];
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
