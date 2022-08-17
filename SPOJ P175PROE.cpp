#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int tong = 0, count = 1;
	if ( s.size() == 1 )
	{
		cout << 0;
		return 0;
	}
	for (int i = 0 ; i < s.size() ; i++)
	{
		tong += (s[i] - '0');
	}
	while ( tong >= 10 )
	{
		count++;
		int tong1 = 0;
		while ( tong != 0 )
		{
			tong1 += (tong % 10);
			tong /= 10;
		}
		tong = tong1;
	}
	cout << count;
}
