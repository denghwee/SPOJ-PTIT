#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, count = 0, pos, res;
	cin >> n >> k;
	vector <int> a(n+1);
	vector <int> b(n+1);
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	vector <bool> check(n+1,true);
	while ( count < k )
	{
		for (int i = 1 ; i <= n ; i++)
		{
			if ( check[i] == true )
			{
				res = a[i];
				pos = i;
				break;
			}
		}
		for (int i = 1 ; i <= n ; i++)
		{
			if( a[i] > res && check[i] == true )
			{
				res = a[i];
				pos = i;
			}
		}
		check[pos] = false;
		count++;
	}
	sort(b.begin()+1,b.end(),greater<int>());
	cout << b[k] << endl;
	for (int i = 1 ; i <= n ; i++)
	{
		if ( check[i] == false )
		{
			cout << i << " ";
		}
	}
}
