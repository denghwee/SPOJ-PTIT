#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int a[100][100], n, x, y, hang, cot, d = 0, number = 1;
		cin >> n >> x >> y;
		hang = n - 1, cot = n - 1;
		while ( d <= n / 2 )
		{
			for (int i = d ; i <= cot ; i++)
			{
				a[d][i] = number++;
			}
			for (int i = d + 1 ; i <= hang ; i++)
			{
				a[i][cot] = number++;
			}
			for (int i = cot - 1 ; i >= d ; i--)
			{
				a[hang][i] = number++;
			}
			for (int i = hang - 1 ; i > d ; i--)
			{
				a[i][d] = number++;
			}
			d++, hang--, cot--;
		}
		cout << a[x-1][y-1];
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
