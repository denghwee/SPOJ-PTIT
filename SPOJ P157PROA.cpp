#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int b[1001]={0};
		int n, max = 0, res;
		cin >> n;
		int a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			b[a[i]]++;
		}
		for (int i = 1 ; i <= 1000 ; i++)
		{
			if ( b[i] != 0 && max < b[i]  )
			{
				max = b[i];
				res = i;
			}
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
