#include <bits/stdc++.h>
using namespace std;

map <string, int> danghuydeptrai;
 
main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1 ; i <= n ; i++)
	{
		string s;
		cin >> s;
		danghuydeptrai[s]++;
		if ( i - danghuydeptrai[s] < danghuydeptrai[s] - 1 )
		{
			count++;
		}
	}
	cout << count;
}   
