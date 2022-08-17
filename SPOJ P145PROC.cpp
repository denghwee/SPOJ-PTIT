#include <bits/stdc++.h>
using namespace std;

int b[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a[10], max = -1, count = 0;
	for (int i = 0 ; i < 10 ; i++)
	{
		cin >> a[i];
		b[a[i]%42]++;
		if ( max < a[i] % 42 )
		{
			max = a[i] % 42;
		}
	}
	for (int i = 0 ; i <= max ; i++)
	{
		if ( b[i] != 0 )
		{
			count++;
		}
	}
	cout << count;
}
