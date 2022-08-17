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
		int n, somu, check = 0, dem = 0;
		cin >> n;
		if ( n == 1 )
		{
			cout << 0;
			continue;
		}
		for (int i = 2 ; i <= sqrt(n) ; i++)
		{
			somu = 0;
			if ( dayso[i] == true )
			{
				while ( n % i == 0 )
				{
					n /= i;
					somu++;
				}
			}
			if ( somu == 1 )
			{
				dem++;
			}
			else if ( somu > 1 )
			{
				check++;
				break;
			}
		}
		if ( check != 0 )
		{
			cout << 0;
		}
		else
		{
			if ( n > 1 )
			{
				dem++;
			}
			if ( dem == 3 )
			{
				cout << 1;
			}
			else
			{
				cout << 0;
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
