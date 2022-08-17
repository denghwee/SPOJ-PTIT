#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
	if ( a > b )
	{
		return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	long long a[4], count = 1;
	for (int i = 0 ; i < 4 ; i++)
	{
		cin >> a[i];
	}
	sort(a,a+4,cmp);
	for (int i = 1 ; i < 4 ; i++)
	{
		if ( a[i] != a[i-1] )
		{
			count++;
		}
	}
	cout << 4 - count;
}
