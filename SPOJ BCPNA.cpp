#include <iostream>
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
	while ( t-- )
	{
		int n, count = 0;
		cin >> n;
		if ( dayso[n] == true )
		{
			count++;
		}
		for (int i = 2 ; i <= n/2 ; i++)
		{
			int tong = 0;
			if ( dayso[i] == true )
			{
				for (int j = i ; j <= n ; j++)
				{
					if ( dayso[j] == true )
					{
						tong += j;
						if ( tong == n )
						{
							count++;
							break;
						}
						if ( tong > n )
						{
							break;
						}
					}
				}
			}
		}
		cout << count;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
