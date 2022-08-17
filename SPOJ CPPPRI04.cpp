#include <bits/stdc++.h>
using namespace std;
#define max 1e6+5

vector <bool> dayso(max,true);

void sangnguyento() {
	dayso[0] = dayso[1] = false;
	for (int i = 2; i*i < max; i++)
    {
        for (int j = i * i; j < max; j += i)
            dayso[j] = false;
    }
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	sangnguyento();
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
        	if ( i == 1 )
        	{
        		cout << "1 ";
        		continue;
			}
            for (int j = 2; j <= i; j++)
        	{
        		if ( dayso[j] == true && i % j == 0 )
        		{
        			cout << j << " ";
        			break;
				}
        	}
        }
        cout << "\n";
	}
} 
