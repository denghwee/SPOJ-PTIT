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
	for (int i = 2 ; i <= 1000)
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		for (int i = 1 ; i <= n ; i++)
		{
			if ( i == 1 )
			{
				cout << 1 << " ";
			}
			else
			{
				for (int j = 2 ; j <= i ; j++)
				{
					if ( dayso[j] == true )
					{
						if ( i % j == 0 )
						{
							cout << j << " ";
							break;
						}
					}
				}
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
