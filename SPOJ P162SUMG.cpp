#include <bits/stdc++.h>
using namespace std;

int main() {
	int lower = 0, upper = 0;
	string s;
	cin >> s;
	for (int i = 0 ; i < s.size() ; i++)
	{
		if ( s[i] >= 'a' && s[i] <= 'z' )
		{
			lower++;
		}
		else
		{
			upper++;
		}
	}
	if ( lower >= upper )
	{
		transform(s.begin(),s.end(),s.begin(),::tolower);
		cout << s;
	}
	else
	{
		transform(s.begin(),s.end(),s.begin(),::toupper);
		cout << s;
	}
}
