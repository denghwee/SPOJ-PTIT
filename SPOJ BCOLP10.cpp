#include <bits/stdc++.h>
using namespace std;

int cmpa[1000]={};
int cmpb[1000]={};

int main() {
	int MAX = 0, res = 0;
	string a, b;
	getline(cin,a);
	getline(cin,b);
	for (int i = 0 ; i < a.size() ; i++)
	{
		cmpa[a[i]]++;
		if ( MAX < (int) a[i] )
		{
			MAX = (int) a[i];
		}
	}
	for (int i = 0 ; i < b.size() ; i++)
	{
		cmpb[b[i]]++;
		if ( MAX < (int) b[i] )
		{
			MAX = (int) b[i];
		}
	}
	for (int i = 0 ; i < MAX ; i++)
	{
		res = res + max(cmpa[i],cmpb[i]) - min(cmpa[i],cmpb[i]);
	}
	cout << res;
}
