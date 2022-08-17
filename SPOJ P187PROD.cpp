#include <bits/stdc++.h>
using namespace std;

int a[91], b[91], check[91];

int main() {
	int count = 0;
	string s;
	cin >> s;
	for (int i = 0 ; i < s.size() ; i++)
	{
		if ( check[s[i]] == 0 )
		{
			a[s[i]] = i;
			check[s[i]] = 1;
		}
		else
		{
			b[s[i]] = i;
		}
	}
	for (int i = 65 ; i <= 90 ; i++)
	{
		for (int j = 65 ; j <= 90 ; j++)
		{
			if ( a[i] < a[j] && b[i] < b[j] && a[j] < b[i] )
			{
				count++;
			}
		}
	}
	cout << count;
}
