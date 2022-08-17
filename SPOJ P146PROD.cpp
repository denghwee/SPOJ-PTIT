#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0, tmp = 0, res = 0;
	cin >> n;
	int a[n*3];
	for (int i = 0 ; i < n * 3 ; i++)
	{
		cin >> a[i];
	}
	for (int i = 0 ; i < n * 3 ; i++)
	{
		count++;
		tmp += a[i];
		if ( count == 3 )
		{
			if ( tmp >= 2 )
			{
				res++;
			}
			tmp = count = 0;
		}
	}
	cout << res;
}
