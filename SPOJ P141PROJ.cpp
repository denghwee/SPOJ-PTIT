#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[4][4];
	for (int i = 0 ; i < 4 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			int black = 0, white = 0;
			for (int h = i ; h <= i + 1 ; h++)
			{
				for (int k = j ; k <= j + 1 ; k++)
				{
					if ( a[h][k] == '#' )
					{
						black++;
					}
					else
					{
						white++;
					}
				}
			}
			if ( black * white == 3 || black * white == 0 )
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}
