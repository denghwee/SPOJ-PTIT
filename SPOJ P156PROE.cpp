#include <bits/stdc++.h>
using namespace std;

string CONST = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

int main() {
	while ( true )
	{
		int k, pos;
		string s;
		cin >> k;
		if ( k == 0 )
		{
			return 0;
		}
		cin >> s;
		for (int i = s.size() - 1 ; i >= 0 ; i--)
		{
			if ( s[i] != '_' && s[i] != '.' )
			{
				pos = s[i] - 'A';
			}
			else
			{
				if ( s[i] == '_' )
				{
					pos = 26;
				}
				else
				{
					pos = 27;
				}
			}
			if ( pos + k >= 28 )
			{
				cout << CONST[pos+k-28];
			}
			else
			{
				cout << CONST[pos+k];
			}
		}
		cout << endl;
	}
}
