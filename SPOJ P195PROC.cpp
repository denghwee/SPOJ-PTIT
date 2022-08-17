#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	long long tmp = 0, penalty = 0;
	for (int i = 0 ; i < n ; i++)
	{
		tmp += a[i];
		penalty += tmp;
		count++;
		if ( tmp > 300 )
		{
			penalty -= tmp;
			count--;
			break;
		}
	}
	cout << count << " " << penalty;
}
