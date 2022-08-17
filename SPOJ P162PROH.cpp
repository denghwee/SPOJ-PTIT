#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x, count = 0 , i = 1, d = 1;
	cin >> x;
	while ( true )
	{
		i++;
		d += i;
		x -= d;
		count++;
		if ( x <= 0 )
		{
			break;
		}
	}
	cout << count;
}
