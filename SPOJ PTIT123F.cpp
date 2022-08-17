#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		int n, count = 0;
		cin >> n;
		vector <bool> room(n+1,true);
		for (int i = 2 ; i <= n ; i++)
		{
			for (int j = i ; j <= n ; j += i)
			{
				if ( room[j] == true )
				{
					room[j] = false;
				}
				else
				{
					room[j] = true;
				}
			}
		}
		for (int i = 1 ; i <= n ; i++)
		{
			if ( room[i] == true )
			{
				count++;
			}
		}
		cout << count;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
