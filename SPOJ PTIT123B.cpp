#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt = 0;
	while ( true )
	{
		tt++;
		int n, count = 0;
		cin >> n;
		if ( n == 0 )
		{
			return 0;
		}
		int a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		int check1 = 0;
		for (int i = 0 ; i < n - 1 ; i++)
		{
			if ( a[i] == a[i+1] )
			{
				check1++;
			}
		}
		if ( check1 == n - 1 )
		{
			cout << "Case " << tt << ": " << "0 iterations" << endl;
		}
		else
		{
			int check = 0;
			while ( true )
			{
				int tmp = a[n-1] - a[0];
				if ( tmp < 0 )
				{
					tmp = -tmp;
				}
				for (int i = 0 ; i < n - 1 ; i++)
				{
					a[i] = a[i] - a[i+1];
					if ( a[i] < 0 )
					{
						a[i] = -a[i];
					}
				}
				a[n-1] = tmp;
				count++;
				for (int i = 0 ; i < n - 1 ; i++)
				{
					if ( a[i] == a[i+1] )
					{
						check++;
					}
					else
					{
						check = 0;
						break;
					}
				}
				if ( count == 1001 )
				{
					break;
				}
				if ( check == n - 1 )
				{
					break;
				}
			}
			if ( count == 1001 )
			{
				cout << "Case " << tt << ": " << "not attained" << endl;
			}
			else
			{
				cout << "Case " << tt << ": " << count << " iterations" << endl;
			}
		}
	}
}
