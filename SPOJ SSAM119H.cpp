#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while ( t-- )
	{
		string n;
		cin >> n;
		long long res = 0;
		int tmp = (n[n.size()-2] - '0') * 10 + n[n.size()-1] - '0', check = 0;
		tmp %= 4;
		switch (tmp)
		{
			case 0:
				{
					cout << 4;
					break;
				}
			case 1:
				{
					cout << 0;
					break;
				}
			case 2:
				{
					cout << 0;
					break;
				}
			case 3:
				{
					cout << 4;
					break;
				}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
