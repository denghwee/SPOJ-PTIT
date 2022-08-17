#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, count = 0;
	cin >> n;
	char amount[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> amount[i];
	}
	for (int i = 1 ; i < n ; i++)
	{
		if ( amount[i] != amount[i-1] )
		{
			count++;
		}
	}
	cout << count;
}
