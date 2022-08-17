#include <bits/stdc++.h>
using namespace std;

int main() {
	while ( true )
	{
		string s;
		long long n;
		cin >> s;
		if ( s == "[END]" )
		{
			return 0;
		}
		cin >> n;
		if ( n % 5 == 2 || n % 5 == 0 )
		{
			cout << "Hanako" << endl;
		}
		else
		{
			cout << "Taro" << endl;
		}
	}
}
