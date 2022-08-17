#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	cin.ignore();
	string s, s1;
	cin >> s >> s1;
	for (int i = 0 ; i < n ; i++)
	{
		if ( s[i] == s1[i] )
		{
			continue;
		}
		else if ( s[i] > s1[i] )
		{
			if ( (s[i]-s1[i]) < (s1[i]+10-s[i]) )
			{
				count += (s[i]-s1[i]);
			}
			else
			{
				count += (s1[i]+10-s[i]);
			}
		}
		else
		{
			if ( (s1[i]-s[i]) < (s[i]+10-s1[i]) )
			{
				count += (s1[i]-s[i]);
			}
			else
			{
				count += (s[i]+10-s1[i]);
			}
		}
	}
	cout << count;
}
