#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <char> s1;
	int count = 0;
	string s;
	getline(cin,s);
	for (int i = s.size() - 1 ; i > 0 ; i--)
	{
		count++;
		s1.push_back(s[i]);
		if ( count == 3 )
		{
			s1.push_back(',');
			count = 0;
		}
	}
	s1.push_back(s[0]);
	for (int i = s1.size() - 1 ; i >= 0 ; i--)
	{
		cout << s1[i];
	}
}
