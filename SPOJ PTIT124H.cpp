#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	int X, Y, x[2], y[2];
	cin >> X >> Y;
	int tmp1 = X, tmp2 = Y, tmp3, tmp4, count1 = 1, count2 = 1;
	for (int i = 0 ; i < 2 ; i++)
	{
		cin >> x[i] >> y[i];
		if ( x[i] == tmp1 )
		{
			count1++;
		}
		else
		{
			tmp3 = x[i];
		}
		if ( y[i] == tmp2 )
		{
			count2++;
		}
		else
		{
			tmp4 = y[i];
		}
	}
	if ( count1 == 2 )
	{
		cout << tmp3 << " ";
	}
	else
	{
		cout << tmp1 << " ";
	}
	if ( count2 == 2 )
	{
		cout << tmp4;
	}
	else
	{
		cout << tmp2;
	}
}
