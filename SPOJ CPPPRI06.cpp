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
	for (int i = 1 ; i <= 100000 ; i++)
	{
		if ( dayso[i] == true )
		{
			snt.push_back(i);
		}
	}
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, check = 0;
		cin >> n;
		for (int i = 0 ; i < snt.size() ; i++)
		{
			for (int j = 0 ; j < snt.size() ; j++)
			{
				if ( n == snt[i] + snt[j] )
				{
					cout << snt[i] << " " << snt[j];
					check++;
					break;
				}
				if ( snt[i] + snt[j] > n )
				{
					break;
				}
			}
			if ( check != 0 )
			{
				break;
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
