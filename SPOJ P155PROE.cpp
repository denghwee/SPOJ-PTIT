#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 1;
	string s;
	cin >> s;
	if ( s.size() < 2 )
	{
		s = '0' + s;
	}
	for (int i = 0 ; i < s.size() ; i++)
	{
		if (s[i]=='0') count *= 2;
		if (s[i]=='1') count *= 7;
		if (s[i]=='2') count *= 2;
		if (s[i]=='3') count *= 3;
		if (s[i]=='4') count *= 3;
		if (s[i]=='5') count *= 4;
		if (s[i]=='6') count *= 2;
		if (s[i]=='7') count *= 5;
		if (s[i]=='8') count *= 1;
		if (s[i]=='9') count *= 2;
	}
	cout << count;
}
