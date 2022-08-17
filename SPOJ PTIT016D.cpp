#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n, k, res = 0;
	cin >> n >> k;
	vector <long long> a(n);
	for (long long i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a.begin()+1,a.end(),greater<int>());
	for (long long i = 0 ; i <= k ; i++)
	{
		res += a[i];
	}
	for (long long i = k + 1 ; i < n ; i++)
	{
		res -= a[i];
	}
	cout << res;
} 
