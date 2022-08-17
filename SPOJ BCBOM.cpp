#include <bits/stdc++.h>
using namespace std;

int main() {
	while ( true )
	{
		int n, m;
		cin >> n >> m;
		cin.ignore();
		if ( n == 0 && m == 0 )
		{
			return 0;
		}
		char a[n+2][m+2] = {};
		int b[n+2][m+2] = {};
		for (int i = 1 ; i <= n ; i++)
		{
			for (int j = 1 ; j <= m ; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 1 ; i <= n ; i++)
		{
			for (int j = 1 ; j <= m ; j++)
			{
				int count = 0;
				if ( a[i][j] == '.' )
				{
					if ( a[i-1][j] == '*' )
					{
						count++;
//						cout << count << endl;
					}
					if ( a[i-1][j-1] == '*' )
					{
						count++;
//						cout << count << endl;
					}
					if ( a[i-1][j+1] == '*' )
					{
						count++;
//						cout << count << endl;
					}
					if ( a[i][j-1] == '*' )
					{
						count++;
					}
					if ( a[i][j+1] == '*' )
					{
						count++;
//						cout << count << endl;
					}
					if ( a[i+1][j] == '*' )
					{
						count++;
//						cout << count << endl;
					}
					if ( a[i+1][j-1] == '*' )
					{
						count++;
//						cout << count << endl;
					}
					if ( a[i+1][j+1] == '*' )
					{
						count++;
//						cout << count << endl;
					}
					b[i][j] = count;
				}
				else
				{
					b[i][j] = 42;
				}
			}
		}
		for (int i = 1 ; i <= n ; i++)
		{
			for (int j = 1 ; j <= m ; j++)
			{
				if ( b[i][j] == 42 )
				{
					cout << "*";
				}
				else
				{
					cout << b[i][j];
				}
			}
			cout << endl;
		}
	}
}
