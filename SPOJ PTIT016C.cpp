#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while ( t-- )
	{
		int check = 0;
		string s;
		cin >> s;
		for (int i = 0 ; i < s.size() ; i++)
		{
			if ( (i+1) % 2 == 0 )
			{
				if ( (s[i] - '0') % 2 != 0 )
				{
					check++;
					break;
				}
			}
			else
			{
				if ( (s[i] - '0') % 2 == 0 )
				{
					check++;
					break;
				}
			}
		}
		if ( check != 0 )
		{
			cout << "NO";
		}
		else
		{
			cout << "YES";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
