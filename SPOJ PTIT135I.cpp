#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, tmp;
	cin >> t;
	cin.ignore();
	while ( t-- )
	{
		int dem = 1;
		string s;
		getline(cin,s);
		for (int i = 1 ; i < s.size() ; i++)
		{
			if ( s[i] != s[i-1] )
			{
				cout << dem << s[i-1];
				dem = 0;
			}
			dem++;
		}
		cout << dem << s[s.size()-1];
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
