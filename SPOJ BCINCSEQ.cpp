#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 1, max = 0;
	cin >> n;
	long long a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for (int i = 1 ; i < n ; i++)
	{
		if ( a[i] >= a[i-1] )
		{
			count++;
		}
		else
		{
			if ( max < count )
			{
				max = count;
			}
			count = 1;
		}
	}
	cout << max << endl;
}
