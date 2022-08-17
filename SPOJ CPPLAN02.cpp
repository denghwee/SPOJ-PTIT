#include <bits/stdc++.h>
using namespace std;

void process(string a, string b) {
	while ( a.size() > b.size() )
	{
		b = '0' + b;
	}
	while ( a.size() < b.size() )
	{
		a = '0' + a;
	}
	int tmp, remember = 0;
	for (int i = a.size() - 1 ; i >= 0 ; i--)
	{
		tmp = a[i] - '0' + b[i] - '0';
		if ( remember != 0 )
		{
			tmp++;
			remember = 0;
		}
		if ( tmp >= 10 )
		{
			remember++;
			tmp -= 10;
		}
		a[i] = tmp + '0';
	}
	if ( remember != 0 )
	{
		a = '1' + a;
	}
	for (int i = 0 ; i < a.size() ; i++)
	{
		cout << a[i];
	}
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while ( t-- )
	{
		string a, b;
		cin >> a >> b;
		process(a,b);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
