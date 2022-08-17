#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, n, count = 0;
	cin >> s >> n;
	vector< pair <int,int> > x(n);
	for (int i = 0 ; i < n ; i++)
	{
		cin >> x[i].first >> x[i].second;
	}
	sort(x.begin(),x.end());
	for (int i = 0 ; i < n ; i++)
	{
		if ( s > x[i].first )
		{
			s += x[i].second;
			count++;
		}
	}
	if ( count == n )
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
