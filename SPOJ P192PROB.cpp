#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin >> x >> y >> z;
	int res = 0, sum;
	for (int i = 0 ; i <= x ; i++)
	{
		if ( i + 1  <= y && i + 2 <= z )
		{
			sum = i + (i+1) + (i+2);
			res = max(sum,res);
		}
	}
	cout << res;
}
