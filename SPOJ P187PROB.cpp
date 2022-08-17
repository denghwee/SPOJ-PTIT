#include <bits/stdc++.h>
using namespace std;

vector <long long> a(2e6+5,1);
vector <long long> s(2e6+5,0);

void sieve() {
    a[0] = 0, a[1] = 0;
    for (long long i = 2; i <= (2e6+5)/2 ; i++)
    {
        if ( a[i] == 1 )
        {
            for (long long j = i * 2; j < 2e6+5 ; j += i)
            {
                a[j] = 0;
                long long tmp = j;
                while ( tmp % i == 0 )
                {
                    s[j] += i;
                    tmp /= i;
                }
            }
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	sieve();
	int n, x;
	long long res = 0;
	cin >> n;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> x;
		if ( x == 1 )
		{
			continue;
		}
		if  ( a[x] == 1 )
		{
			res += x;
		}
		else
		{
			res += s[x];
		}
	}
	cout << res;
}
