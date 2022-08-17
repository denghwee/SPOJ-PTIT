#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count4 = 0, count7 = 0;
	cin >> n;
	bool check = true;
	while ( true )
	{
		if ( n % 7 == 0 )
		{
			count7 += (n/7);
			break;
		}
		if ( n >= 4 )
		{
			count4++;
			n -= 4;
		}
		if ( n < 4 )
		{
			if ( n != 0 )
			{
				check = false;
				break;
			}
		}
	}
	if ( check == false )
	{
		cout << -1;
	}
	else
	{
		for (int i = 0 ; i < count4 ; i++)
		{
			cout << 4;
		}
		for (int i = 0 ; i < count7 ; i++)
		{
			cout << 7;
		}
	}
}
