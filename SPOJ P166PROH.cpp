#include <bits/stdc++.h>
using namespace std;

bool dayso[3005];
vector <int> a(3005,0);

void sangnguyento() {
    for(int i = 0 ; i <= 3000 ; i++)
	{
        dayso[i] = true;
    }
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i <= 3000 ; i++)
	{
        if( dayso[i] == true )
		{
            for (int j = i ; j <= 3000 ; j += i)
            {
                dayso[j] = false;
                a[j]++;
            }
        }
    }
}

int main() {
	sangnguyento();
	int n, res = 0;
	cin >> n;
	for (int i = 0 ; i <= n ; i++)
	{
		if ( a[i] == 2 )
		{
			res++;
		}
	}
	cout << res;
}
