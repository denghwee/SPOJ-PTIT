#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c, count = 0, res = 0;
	cin >> r >> c;
	char a[r][c];
	for (int i = 0 ; i < r ; i++)
	{
		for (int j = 0 ; j < c ; j++)
		{
			cin >> a[i][j];
			if ( a[i][j] == '#' && a[i-1][j] == '#' )
			{
				count++;
				b[
			}
			if ( a[i][j] == '#' && a[i][j-1] == '#' )
			{
				count++;
			}
			if ( a[i][j] == '#' )
			{
				res++;
			}
		}
	}
	res -= count;
	cout << res;
}
