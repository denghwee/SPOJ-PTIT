#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	long long sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	int d = 0;
	for (int i = 1 ; i < n ; i++)
	{
		d += a[i-1];
		sum += a[i] * d;
	}
	cout << sum;
}
