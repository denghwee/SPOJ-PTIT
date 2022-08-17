#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		int number, r;
		string s;
		cin >> number >> r;
		cin.ignore();
		getline(cin,s);
		cout << number << " ";
		for (int i = 0 ; i < s.size() ; i++)
		{
			for (int j = 1 ; j <= r ; j++)
			{
				cout << s[i];
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
