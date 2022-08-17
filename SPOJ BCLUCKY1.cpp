#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	string s;
	getline(cin,s);
	for (int i = 0 ; i < s.size() ; i++)
	{
		if ( s[i] == '4' || s[i] == '7' )
		{
			count++;
		}
	}
	while ( count != 0 )
	{
		if ( count % 10 != 4 && count % 10 != 7 )
		{
			cout << "NO";
			return 0;
		}
		count /= 10;
	}
	cout << "YES";
}
