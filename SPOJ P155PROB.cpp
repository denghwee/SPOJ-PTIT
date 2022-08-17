#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, s;
	cin >> x >> s;
	long long a[5];
	for (int i = 0 ; i < 5 ; i++)
	{
		cin >> a[i];
		a[i] = a[i] - (x*s);
	}
	for (int i = 0 ; i < 5 ; i++)
	{
		cout << a[i] << " ";
	}
}
