#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int tmp1, tmp2;
	char s[b.size()][a.size()];
	for (int i = 0 ; i < max(a.size(),b.size()) ; i++)
	{
		int check = 0;
		for (int j = 0 ; j < max(a.size(),b.size()) ; j++)
		{
			if ( a[i] == b[j] )
			{
				tmp1 = i;
				tmp2 = j;
				check++;
				break;
			}
		}
		if ( check != 0 )
		{
			break;
		}
	}
	int h = 0, k = 0;
	for (int i = 0 ; i < b.size() ; i++)
	{
		for (int j = 0 ; j < a.size() ; j++)
		{
			if ( j == tmp1 || i == tmp2 )
			{
				if ( j == tmp1 && i == tmp2 )
				{
					s[i][j] = b[h];
					h++;
					k++;
				}
				else if ( j == tmp1 )
				{
					s[i][j] = b[h];
					h++;
				}
				else
				{
					s[i][j] = a[k];
					k++;
				}
			}
			else
			{
				s[i][j] = '.';
			}
		}
	}
	for (int i = 0 ; i < b.size() ; i++)
	{
		for (int j = 0 ; j < a.size() ; j++)
		{
			
			cout << s[i][j];
		}
		cout << endl;
	}
}
