#include <bits/stdc++.h>
using namespace std;

int main() {
	while ( true )
	{
		string n;
		cin >> n;
		if ( n == "0" )
		{
			return 0;
		}
		int s = 0;
		for (int i = 0 ; i < n.size() ; i++)
		{
			int tmp = n[i] - '0';
			if ( tmp > 4 )
			{
				tmp--;
			}
			s = s * 9 + tmp;
		}
		cout << n << ": " << s << endl;
	}
}
