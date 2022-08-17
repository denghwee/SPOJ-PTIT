#include <bits/stdc++.h>
using namespace std;

struct data{
	char c;
	int pos;
};

bool cmp(data a, data b) {
	if ( a.c > b.c )
	{
		return true;
	}
	else if ( a.c == b.c )
	{
		if ( a.pos < b.pos )
		{
			return true;
		}
	}
	return false;
}

int main() {
	string s;
	cin >> s;
	vector <data> a;
	for (int i = 0 ; i < s.size() ; i++)
	{
		data tmp;
		tmp.c = s[i];
		tmp.pos = i;
		a.push_back(tmp);
	}
	int poss = -1;
	sort(a.begin(),a.end(),cmp);
	for (int i = 0 ; i < a.size() ; i++)
	{
		if ( a[i].pos > poss )
		{
			poss = a[i].pos;
			cout << a[i].c;
		}
	}
}
