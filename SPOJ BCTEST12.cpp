#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for (int i = 0 ; i < s.size() ; i++)
	{
		if ( s[i] != 'e' && s[i] != 'u' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y' )
		{
			cout << "." << s[i];
		}
	}
}
