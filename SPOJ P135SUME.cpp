#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[8], ascending = 1, descending = 1;
	for (int i = 0 ; i < 8 ; i++)
	{
		cin >> a[i];
	}
	for (int i = 1 ; i < 8 ; i++)
	{
		if ( a[i] > a[i-1] )
		{
			ascending++;
		}
		else
		{
			descending++;
		}
	}
	if ( ascending == 8 )
	{
		cout << "ascending";
	}
	else if ( descending == 8 )
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
}
