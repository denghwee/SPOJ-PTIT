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
		int n, tong = 1;
		cin >> n;
		int tmp = n;
		for (int i = 2 ; i <= sqrt(n) ; i++)
		{
			if ( dayso[i] == true )
			{
				while ( n % i == 0 )
				{
					n /= i;
					tong += i;
				}
			}
		}
		if ( n > 1 )
		{
			tong += n;
		}
		if ( tong == tmp )
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
