#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	long long tmp = -1;
	getline(cin,s);
	for (int i = 0 ; i < s.size() ; i++)
	{
		if ( s[i] == '0' )
		{
			tmp = i;
			break;
		}
	}
	if ( tmp != -1 )
	{
		for (int i = 0 ; i < s.size() ; i++)
		{
			if ( i != tmp )
			{
				cout << s[i];
			}
		}
	}
	else
	{
		for (int i = 1 ; i < s.size() ; i++)
		{
			cout << s[i];
		}
	}
}
