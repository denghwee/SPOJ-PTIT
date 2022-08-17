#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a[6], max = 0;
	for (int i = 0 ; i < 6 ; i++)
	{
		cin >> a[i];
		if ( max < a[i] )
		{
			max = a[i];
		}
	}
	long long tmp = a[0] * a[1] + a[2] * a[3] + a[4] * a[5];
	if ( tmp == max * max )
	{
		cout << max;
	}
	else
	{
		cout << 0;
	}
}
