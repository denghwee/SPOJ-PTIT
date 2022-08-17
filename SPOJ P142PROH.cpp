#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	char a[r][c];
	int b[r][c] = {};
	for (int i = 0 ; i < r ; i++)
	{
		for (int j = 0 ; j < c ; j++)
		{
			cin >> a[i][j];
		}
	}
	int count = 0, res = 0;
	for (int i = 0 ; i < r ; i++)
	{
		int check = 0;
		for (int j = 0 ; j < c ; j++)
		{
			if ( a[i][j] == 'S' )
			{
				check++;
			}
		}
		if ( check == 0 )
		{
			res += c;
			count++;
		}
	}
	for (int i = 0 ; i < c ; i++)
	{
		int check = 0;
		for (int j = 0 ; j < r ; j++)
		{
			if ( a[j][i] == 'S' )
			{
				check++;
			}
		}
		if ( check == 0 )
		{
			res += (r-count);
		}
	}
	cout << res;
}
