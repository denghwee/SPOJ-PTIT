#include <bits/stdc++.h>
using namespace std;

bool dayso[100001];
vector <int> snt;

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
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	sangnguyento();
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, tong1 = 0, tong2 = 0, sodu;
		cin >> n;
		if ( dayso[n] == true )
		{
			cout << "NO";
		}
		else
		{
			int tmp = n;
			while ( tmp != 0 )
			{
				sodu = tmp % 10;
				tong1 += sodu;
				tmp /= 10;
			}
			for (int i = 1 ; i <= sqrt(n) ; i++)
			{
				if ( dayso[i] == true )
				{
					while ( n % i == 0 )
					{
						n /= i;
						int j = i;
						while ( j != 0 )
						{
							sodu = j % 10;
							tong2 += sodu;
							j /= 10;
						}
					}
				}
			}
			if ( n > 1 )
			{
				tmp = n;
				while ( tmp != 0 )
				{
					sodu = tmp % 10;
					tong2 += sodu;
					tmp /= 10;
				}
			}
			if ( tong1 == tong2 )
			{
				cout << "YES";
			}
			else
			{
				cout << "NO";
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
