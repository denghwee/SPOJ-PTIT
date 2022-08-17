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
	sangnguyento();
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, tong1 = tong2 = 0;
		cin >> n;
		int tmp = n;
		if ( dayso[tmp] == true )
		{
			cout << "NO";
		}
		else
		{
			while ( tmp != 0 )
			{
				tong1 += (tmp % 10);
				tmp /= 10;
			}
			for (int i = 1 ; i <= sqrt(n) ; i++)
			{
				if ( dayso[i] == true )
				{
					while ( n % i == 0 )
					{
						n /= i;
						int j = i
						while ( j != 0 )
						{
							tong2 += (j % 10);
							j /= 10;
						}
					}
					if ( check != 0 )
					{
						cout << i << " " << somu << " ";
					}
				}
			}
		}
		if ( n > 1 )
		{
			cout << n << " 1";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
