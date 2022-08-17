#include <bits/stdc++.h>
using namespace std;

bool dayso[1000001];
vector <long long> a;

void sangnguyento() {
    for(int i = 0 ; i <= 1000000 ; i++)
	{
        dayso[i] = true;
    }
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i * i <= 1000005 ; i++)
	{
        if( dayso[i] == true )
		{
            for(int j = i * i ; j <= 1000005 ; j += i)
            {
                dayso[j] = false;
            }
        }
    }
    for (long long i = 2 ; i <= 1000001 ; i++)
    {
    	if ( dayso[i] == true )
    	{
    		a.push_back(i*i);
		}
	}
}

int main() {
	sangnguyento();
	int t;
	cin >> t;
	while ( t-- )
	{
		int check = 0;
		long long n;
		cin >> n;
		for (long long i = 0 ; i < a.size() ; i++)
		{
			if ( n = 1000000000000 )
			{
				check++;
				break;
			}
			if ( n == a[i] )
			{
				break;
			}
			if ( n < a[i] )
			{
				check++;
				break;
			}
		}
		if ( check != 0 )
		{
			cout << "NO";
		}
		else
		{
			cout << "YES";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
