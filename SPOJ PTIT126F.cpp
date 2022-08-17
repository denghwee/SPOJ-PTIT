#include <bits/stdc++.h>
using namespace std;

int main() {
	int L = 0, R = 0, max = 0;
	string s;
	cin >> s;
	for (int i = 0 ; i < s.size() ; i++)
	{
		if ( s[i] == 'L' )
		{
			L++;
			R--;
		}
		else if ( s[i] == 'R' )
		{
			R++;
			L--;
		}
		else
		{
			L++;
			R++;
		}
		if ( max < L )
		{
			max = L;
		}
		if ( max < R )
		{
			max = R;
		}
	}
	cout << max;
}
