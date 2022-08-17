#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		string s;
		cin >> s;
		if ( s == "0" )
		{
			cout << "YES";
		}
		else
		{
			if ( s.size() == 1 )
			{
				cout << "NO";
			}
			else
			{
				int count = 0, n = s.size();
				int d1 = ( s.at(n-2) - '0' ) * 10 + ( s.at(n-1) - '0' );
				if ( d1 % 4 == 0 )
				{
					count++;
				}
				int d2 = 0;
				for (int i = 0 ; i < n ; i++)
				{
					d2 += s[i] - '0';
				}
				if ( d2 % 9 == 0 )
				{
					count++;
				}
				if ( count == 2 )
				{
					cout << "YES";
				}
				else
				{
					cout << "NO";
				}
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
 
