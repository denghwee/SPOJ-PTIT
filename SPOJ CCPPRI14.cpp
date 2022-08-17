#include <bits/stdc++.h>
using namespace std;

bool dayso[100001];
vector <int> snt;

void sangnguyento() {
    for(int i = 0 ; i <= 10000 ; i++)
	{
        dayso[i] = true;
    }
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i * i <= 10000 ; i++)
	{
        if( dayso[i] == true )
		{
            for(int j = i * i ; j <= 10000 ; j += i)
            {
                dayso[j] = false;
            }
        }
    }
}

int main() {
	sangnguyento();
	for (int i = 2 ; i <= 1000 ; i++)
	{
		if ( dayso[i] == true )
		{
			snt.push_back(i*i);
		}
	}
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		for (int i = 0 ; i < snt.size() ; i++)
		{
			if ( snt[i] <= n )
			{
				cout << snt[i] << " ";
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
