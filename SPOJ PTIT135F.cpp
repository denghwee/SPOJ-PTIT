#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	char a[5*m+1][5*n+1];
	for (int i = 0 ; i < 5*m+1 ; i++)
	{
		for (int j = 0 ; j < 5*n+1 ; j++)
		{
			cin >> a[i][j];
		}
	}
	int count = 0, res1 = 0, res2 = 0, res3 = 0, res4 = 0, res5 = 0;
	for (int i = 1 ; i < 5*n+1 ; i += 4)
	{
		for (int j = 1 ; j < 5*m+1 ; j++)
		{
			if ( a[j][i] == '*' )
			{
				count++;
			}
			else if ( a[j][i] == '.' )
			{
				j = j - count + 4;
				switch ( count )
				{
					case 0:
						{
							res1++;
							break;
						}
					case 1:
						{
							res2++;
							break;
						}
					case 2:
						{
							res3++;
							break;
						}
					case 3:
						{
							res4++;
							break;
						}
				}
				count = 0;
			}
			else
			{
				if ( count == 4 )
				{
					res5++;
					j = j - count + 4;
					count = 0;
				}
			}
		}
	}
	cout << res1 << " " << res2 << " " << res3 << " " << res4 << " " << res5;
}
