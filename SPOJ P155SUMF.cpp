#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1], b[n+1];
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> b[i];
	}
	int tmp = 0;
	a[0] = 0;
	for (int i = 1 ; i <= n ; i++)
	{
		tmp += a[i-1];
		a[i] = b[i]*i - tmp;
		cout << a[i] << " ";
	}
}
