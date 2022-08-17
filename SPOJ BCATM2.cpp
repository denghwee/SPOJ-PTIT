#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, s, count = 0;
	cin >> n >> s;
	vector <long long> a(n);
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a.rbegin(),a.rend());
	for (int i = 0 ; i < n ; i++)
	{
		if ( s >= a[i] )
		{
			s -= a[i];
			count++;
		}
	}
	cout << count;
}
