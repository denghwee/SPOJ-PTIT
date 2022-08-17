#include <bits/stdc++.h>
using namespace std;

vector <string> a;
vector <string> res;

bool cmp(string u, string v) {
	while ( u.length() != 102 ) u='0'+u;
	while ( v.length() != 102 ) v='0'+v;
	for (int i = 0 ; i < 102 ; i++)
	{
		int ui = u[i] - '0';
		int vi = v[i] - '0';
		if( ui > vi ) return false;
		if( ui < vi ) return true;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while ( t-- )
	{
		string s;
		cin >> s;
		a.push_back(s);
	}
	for (int i = 0 ; i < a.size() ; i++)
	{
		for (int j = 0 ; j < a[i].size() ; j++)
		{
			if( a[i][j] >= '0' && a[i][j] <= '9' )
			{
				string tam;
				while ( a[i][j] >= '0' && a[i][j] <= '9' )
				{
					tam += a[i][j];
					j++;
				}
				res.push_back(tam);
			}
		}
	}
	for(int i = 0 ; i < res.size() ; i++)
	{
		int j = 0;
		if ( res[i].length() != 1 )
		{
			while ( res[i][j] == '0' && res[i].length() != 1 )
			{
				res[i].erase(j,1);
			}
		}
	}
	sort(res.begin(),res.end(),cmp);
	for (int i = 0 ; i < res.size() ; i++)
	{
		cout << res[i] << endl;
	}
}
