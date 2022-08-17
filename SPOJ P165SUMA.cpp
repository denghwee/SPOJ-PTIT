#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	cin.ignore();
	string s;
	cin >> s;
	while ( k-- )
	{
		for (int i = 0 ; i < s.size() ; i++)
		{
			if ( s[i] == '4' && s[i+1] == '7' )
			{
				if ( i % 2 == 0 )
				{
					s[i] = s[i+1] = '4';
					break;
				}
				else
				{
					s[i] = s[i+1] = '7';
					break;
				}
			}
		}
	}
	for (int i = 0 ; i < s.size() ; i++)
	{
		cout << s[i];
	}
}
