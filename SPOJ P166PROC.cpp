#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a[n][n];
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}
	int count = 0;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n - 1 ; j++)
		{
			if ( a[i][j] == 'C' )
			{
				for (int h = j + 1 ; h < n ; h++)
				{
					if ( a[i][h] == 'C' )
					{
						count++;
					}
				}
			}
		}
	}
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n - 1; j++)
		{
			if ( a[j][i] == 'C' )
			{
				for (int h = j + 1 ; h < n ; h++)
				{
					if ( a[h][i] == 'C' )
					{
						count++;
					}
				}
			}
		}
	}
	cout << count;
}
