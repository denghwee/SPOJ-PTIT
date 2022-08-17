#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int count = 0, res = 0;
	string s;
	cin >> s;
	for (int i = 1 ; i < s.size() ; i++)
	{
		if ( s[i-1] == ')' && s[i] == ')' )
		{
			count++;
		}
	}
	for (int i = 1 ; i < s.size() ; i++)
	{
		if ( s[i-1] == '(' && s[i] == '(' )
		{
			res += count;
		}
		if ( s[i-1] == ')' && s[i] == ')' )
		{
			count--;
		}
	}
	cout << res;
}
