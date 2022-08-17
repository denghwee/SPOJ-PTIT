#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int sum = 0;
		string s;
		cin >> s;
		while ( true )
		{
			for (int i = 0 ; i < s.size() ; i++)
			{
				sum += (s[i] - '0');
			}
			if ( sum == 9 )
			{
				cout << 1;
				break;
			}
			else
			{
				if ( sum < 9 )
				{
					cout << 0;
					break;
				}
				else
				{
					s = "";
					while ( sum != 0 )
					{
						s.push_back(sum%10+'0');
						sum /= 10;
					}
					continue;
				}
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
