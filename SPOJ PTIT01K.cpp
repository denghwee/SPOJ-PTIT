#include <bits/stdc++.h>
using namespace std;
 
long process(int n) {
	long long s = 1;
	for (int i = 2 ; i <= n ; i++)
	{
		s *= i;
	}
	return s;
}
 
int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		string s;
		cin >> s;
		long long tmp = 2, res = s[s.size()-1] - '0';
		for (int i = s.size() - 2 ; i >= 0 ; i--)
		{
			res += (s[i]-'0') * process(tmp);
			tmp++;
		}
		cout << res;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
 
