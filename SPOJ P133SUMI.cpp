#include <bits/stdc++.h>
using namespace std;

int n, s, a[35], res = 1000005;

void process(int i, int d, long long sum) {
	if ( sum > s || d > res )
	{
		return;
	}
	if ( i == n )
	{
		if ( sum == s )
		{
			res = min(res,d);
		}
		return;
	}
	process(i+1,d,sum);
	process(i+1,d+1,sum+a[i]);
}

int main() {
	cin >> n >> s;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	process(0,0,0);
	cout<<res;
}
