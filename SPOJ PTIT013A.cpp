#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		string s;
		cin.ignore();
		getline(cin,s);
		if ( s[s.size()-1] == '6' && s[s.size()-2] == '8' )
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
	
}
