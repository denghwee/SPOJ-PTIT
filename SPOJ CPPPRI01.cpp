#include <bits/stdc++.h>
using namespace std;
#define max 1e6+5

vector <bool> dayso(max,true);

void sangnguyento() {
	dayso[0] = dayso[1] = false;
	for (int i = 2; i < sqrt(max); ++i)
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
        for (int i = 2; i <= sqrt(n); ++i)
        {
            if (dayso[i] == true)
            {
                while (n % i == 0)
                {
                    cout << i << " ";
                    n /= i;
                }
            }
        }
        if (n > 1)
            cout << n;
        cout << "\n";
	}
} 
