#include <bits/stdc++.h>
using namespace std;

int n, m;
string a, b;

string cong(string a, string b) {
	while ( a.size() > b.size() )
	{
		b = '0' + b;
	}
	while ( b.size() > a.size() )
	{
		a = '0' + a;
	}
	int remember = 0;
	for (int i = a.size() - 1 ; i >= 0 ; i--)
	{
		int tmp = a[i] - '0' + b[i] - '0';
//		cout << tmp << endl;
		if ( remember == 1 )
		{
			tmp++;
			remember = 0;
		}
		if ( tmp >= 10 )
		{
			remember = 1;
			tmp -= 10;
		}
		a[i] = tmp + '0';
	}
	if ( remember == 1 )
	{
		a = '1' + a;
	}
	return a;
}

string luythua(string a, int n, int b) {
	if ( n == 0 )
	{
		return "1";
	}
	else if ( n == 1 )
	{
		return a;
	}
	else
	{
		for (int i = 2 ; i <= n ; i++)
	    {
	    	string tmp = a;
	        for (int j = 2 ; j <= b ; j++)
	        {
	            a = cong(a,tmp);
	        }
	    }
	}
	return a;
}

int main() {
	cin >> n >> m;
	a = "2";
	b = "3";
	a = luythua(a,n,2);
	b = luythua(b,m,3);
	string res = cong(a,b);
	cout << res[0];
}
