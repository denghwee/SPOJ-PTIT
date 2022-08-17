#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x = 0;
	cin >> n;
	cin.ignore();
	string s;
	while ( n-- )
	{
		s = "";
		cin >> s;
		if ( s == "++X" || s == "X++" )
		{
			x++;
		}
		else
		{
			x--;
		}
	}
	cout << x;
}
