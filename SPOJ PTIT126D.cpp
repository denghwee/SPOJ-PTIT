#include <bits/stdc++.h>
using namespace std;

int main() {
	while ( true )
	{
		int k;
		cin >> k;
		if ( k == 0 )
		{
			return 0;
		}
		int p[k+1];
		for (int i = 1 ; i <= k ; i++)
		{
			cin >> p[i];
		}
		for (int i = 1 ; i <= k ; i++)
		{
			if ( i == 1 )
			{
				for (int j = 1 ; j <= p[i] ; j++)
				{
					cout << "1 ";
				}
			}
			else
			{
				if ( p[i] > p[i-1] )
				{
					for (int j = 1 ; j <= p[i] - p[i-1] ; j++)
					{
						cout << i << " ";
					}
				}
			}
		}
		cout << endl;
	}
}
