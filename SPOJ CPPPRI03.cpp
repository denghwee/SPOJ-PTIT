#include <bits/stdc++.h>
using namespace std;

void sangnguyento(int n, vector <int> smallest_divisor, vector <bool> dayso) {
    dayso[0] = false;
    dayso[1] = false;
    for (int i = 2 ; i * i <= 100000 ; i++)
	{
        if( dayso[i] == true )
		{
            for(int j = i * i ; j <= 100000 ; j += i)
            {
                dayso[j] = false;
                if (smallest_divisor[j] == 0)
                {
					smallest_divisor[j] = i;
				}
            }
        }
    }
    for (int i = 2; i <= n; ++i)
        if (dayso[i])
        {
            smallest_divisor[i] = i;
        }
}

void extract(int n)	{
	vector <int> smallest_divisor(n,0);
	vector <bool> dayso(n,true);
    sangnguyento(n,smallest_divisor,dayso);
    vector < int > prime_factor;
    while (n > 1)
    {
        int p = smallest_divisor[n];
        prime_factor.push_back(p);
        n /= p;
    }
    for (int i = 0 ; i < n ; i++)
    {
    	cout << prime_factor[i] << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		extract(n);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
