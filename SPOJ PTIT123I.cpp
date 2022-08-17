#include <bits/stdc++.h>
using namespace std;

bool dayso[1000001];

void sangnguyento() {
    for(int i = 0 ; i <= 1000000 ; i++)
	{
        dayso[i] = true;
    }
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i <= 1000000 ; i++)
	{
        if( dayso[i] == true )
		{
            for(int j = i * 2 ; j <= 1000000 ; j += i)
            {
                dayso[j] = false;
            }
        }
    }
}

int main() {
	sangnguyento();
	while ( true )
	{
		int n, count = 0;
		cin >> n;
		if ( n == 0 )
		{
			return 0;
		}
		for (int i = n + 1 ; i <= 2*n ; i++)
		{
			if ( dayso[i] == true )
			{
				count++;
			}
		}
		cout << count << endl;;
	}
}
