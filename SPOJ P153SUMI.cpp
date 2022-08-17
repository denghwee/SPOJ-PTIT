#include <bits/stdc++.h>
using namespace std;
 
int main () {
	int n, count = 0, pos = -1;
	cin >> n;
	int arr[n+1];
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> arr[i];
		if ( i > 1 && arr[i] < arr[i-1] )
		{
			pos = i;
			count++;
		}
	}
	if ( count > 1 )
	{
		cout << -1;
	}
	else if ( count == 0 )
	{
		cout << 0;
	}
	else if ( count == 1 )
	{
		if ( arr[1] >= arr[n] )
		{
			cout << n - pos + 1;
		}
		else
		{
			cout << -1;
		}
	}
}
