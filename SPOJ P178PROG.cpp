#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while ( true )
	{
		cin >> n;
		if ( n == 0 )
		{
			return 0;
		}
		string s1, s2, s3, s;
		cin >> s1 >> s2 >> s3;
		int count = 0;
		while ( s != s3 )
		{
			count++;
			if ( count == 51 )
			{
				break;
			}
			s = "";
			for (int i = 0 ; i < n ; i++)
			{
				s.push_back(s2[i]);
				s.push_back(s1[i]);
			}
			s1 = "", s2 = "";
			for (int i = 0 ; i < n ; i++)
			{
				s1.push_back(s[i]);
			}
			for (int i = n ; i < n*2 ; i++)
			{
				s2.push_back(s[i]);
			}
		}
		if ( count == 51 )
		{
			cout << -1 << endl;
		}
		else
		{
			cout << count << endl;
		}
	}
}
