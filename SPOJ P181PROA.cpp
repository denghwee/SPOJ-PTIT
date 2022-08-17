#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1];
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
	}
	if ( n == 2 || a[1] % 2 == 0 || a[n] % 2 == 0 )
	{
		cout << "no";
		return 0;
	}
	if ( n % 2 == 1 )
	{
		cout << "yes";
		return 0;
	}
	cout << "no" ;
}
