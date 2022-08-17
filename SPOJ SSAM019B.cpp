#include <bits/stdc++.h>
using namespace std;

pair <long long,long long> a[100005];

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, res = -1, max = 100005;
		cin >> n;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a,a+n);
		for (int i = 1 ; i < n ; i++)
		{
			if ( a[i-1].first == a[i].first && a[i-1].second < max )
			{
				res = a[i].first;
				max = a[i-1].second;
			}
		}
		if ( res == -1 )
		{
			cout << "NO";
		}
		else
		{
			cout << res;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
