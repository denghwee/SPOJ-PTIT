#include <bits/stdc++.h>
using namespace std;

int b[127];

int main() {
	int n;
	cin >> n;
	cin.ignore();
	string s;
	cin >> s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for (int i = 0 ; i < s.size() ; i++)
	{
		b[s[i]]++;
	}
	for (int i = 97 ; i <= 122 ; i++)
	{
		if ( b[i] < 1 )
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
