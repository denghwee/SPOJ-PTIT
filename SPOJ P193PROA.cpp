#include <bits/stdc++.h>
using namespace std;

struct data{
	long long tt;
	long long sum;
};

long long a[1000005];
data b[1000005];

int main() {
	long long n, max = -1;
	cin >> n;
	for (long long i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
		if ( max < a[i] ) max = a[i];
	}
	for (long long i = 1 ; i <= n ; i++)
	{
		a[i] -= max;
	}
	long long j = 0;
	for (long long i = 1 ; i <= n ; i++)
	{
		if ( a[i] >= 0 )
		{
			b[j].tt++;
			b[j].sum += a[i];
		}
		else
		{
			j++;
		}
	}
	max = -1;
	long long maxso = -1;
	for (long long i = 0 ; i <= j ; i++)
	{
		if ( max <= b[i].sum && maxso <= b[i].tt )
		{
			max = b[i].sum;
			maxso = b[i].tt;
		}
	}
	cout << maxso;
}
