#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c, a, b;
	cin >> r >> c >> a >> b;
	char s[r][c];
	for (int i = 0 ; i < r ; i++)
	{
		for (int j = 0 ; j < c ; j++)
		{
			cin >> s[i][j];
		}
	}
	for (int i = 0 ; i < r ; i++)
	{
		int count = 1;
		for (int j = 0 ; j < c ; j++)
		{
			while ( count <= b )
			{
				cout << s[i][j];
				count++;
			}
			if ( count > b )
			{
				count = 1;
			}
		}
		cout << endl;
		int count1 = 1;
		while ( count1 < a )
		{
			count1++;
			for (int j = 0 ; j < c ; j++)
			{
				while ( count <= b )
				{
					cout << s[i][j];
					count++;
				}
				if ( count > b )
				{
					count = 1;
				}
			}
			cout << endl;
		}
	}
}
