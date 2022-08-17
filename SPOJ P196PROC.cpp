#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s1, s2;
	cin >> n >> s1 >> s2;
	for (int i = 0 ; i < n ; i++)
	{
		if ( s1[i] == 'K' )
		{
			if ( s2[i] == 'K' )
			{
				cout << "B";
				continue;
			}
			else if ( s2[i] == 'B' )
			{
				cout << "B";
				continue;
			}
			else
			{
				cout << "K";
				continue;
			}
		}
		else if ( s1[i] == 'B' )
		{
			if ( s2[i] == 'B' )
			{
				cout << "G";
				continue;
			}
			else if ( s2[i] == 'G' )
			{
				cout << "G";
				continue;
			}
			else
			{
				cout << "B";
				continue;
			}
		}
		else
		{
			if ( s2[i] == 'B' )
			{
				cout << "G";
				continue;
			}
			else if ( s2[i] == 'G' )
			{
				cout << "K";
				continue;
			}
			else
			{
				cout << "K";
				continue;
			}
		}
	}
}
