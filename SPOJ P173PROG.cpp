#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;
	cin.ignore();
	while ( t-- )
	{
		string s;
		cin >> s;
		if ( next_permutation(s.begin(),s.end()) == true )
		{
			cout << s;
		}
		else
		{
			cout << "BIGGEST";
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
