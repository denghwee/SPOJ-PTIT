#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, x;
	cin >> n >> x;
	long long a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	int count = 1;
	long long min = 1e10, tmp;
	for (int i = n - 1 ; i >= 1 ; i--)
	{
		if ( a[i] == a[i-1] )
		{
			count++;
		}
		else
		{
			if ( min > count )
			{
				min = count;
				tmp = i;
			}
			count = 1;
		}
	}
	long long res = n * x - a[tmp] * min;
	cout << res;
}
