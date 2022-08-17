#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	string s;
	cin >> n >> s;
	for (int i = 2 ; i < s.size() ; i++)
	{
		if ( s[i] == '0' && s[i-1] == '1' && s[i-2] == '0' )
		{
			count++;
			s[i] = '1';
		}
	}
	cout << count;
}
