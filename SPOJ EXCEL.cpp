#include <bits/stdc++.h>
using namespace std;

string column(int x) {
	string ans;
	char c;
	while ( x > 0 )
	{
		x--;
		c = 'A' + x % 26;
		ans = c + ans;
		x = x / 26;
	}
	return ans;
}
 
int main() {
	while ( true )
	{
		char tmp;
		int n, m;
		cin >> tmp >> n >> tmp >> m;
		if ( n == 0 && n == m )
		{
			return 0;
		}
		cout << column(m) << n << endl;
	}
} 
