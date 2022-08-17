#include <bits/stdc++.h>
using namespace std;

vector <bool> dayso(10000,true);

void sangnguyento() {
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i <= 10000 ; i++)
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
	ios_base::sync_with_stdio;
	cin.tie(0);
	long long n;
	cin >> n;
	if ( dayso[n] == true )
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
