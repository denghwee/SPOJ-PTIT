#include <bits/stdc++.h>
using namespace std;

long long bsearch(long long *a, long long lo, long long hi, long long key) {
	long ans = -1;
    while ( lo <= hi )
	{
        int mi = (lo + hi) / 2;
        if ( a[mi] <= key )
		{ 
            ans = mi;
            lo = mi + 1;
        }
		else
		{
			hi = mi - 1;
		}
    }
    return ans;
}

int main() {
	int n, m;
	cin >> n >> m;
	long long a[n], b[m];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for (int i = 0 ; i < m ; i++)
	{
		cin >> b[i];
	}
	sort(a,a+n);
	for (int i = 0 ; i < m ; i++)
	{
		long long tmp = b[i];
		if ( tmp < a[0] )
		{
			cout << 0 << endl;
		}
		else
		{
			long long pos = -1;
			for (int j = 0 ; j < n ; j++)
			{
				if ( a[j] > tmp )
				{
					pos = j;
					break;
				}
			}
			if ( pos == -1 )
			{
				cout << n << endl;
			}
			else
			{
				cout << pos << endl;
			}
		}
	}
}
