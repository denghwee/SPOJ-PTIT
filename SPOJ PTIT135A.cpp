#include <bits/stdc++.h>
using namespace std;

struct thoigian {
	int den, di;
};

int main() {
	int a, b, c, res = 0;
	cin >> a >> b >> c;
	thoigian arr[3];
	for (int i = 0 ; i < 3 ; i++)
	{
		cin >> arr[i].den >> arr[i].di;
	}
	for (int i = 0 ; i <= 100 ; i++)
	{
		int check = 0;
		if ( arr[0].den <= i && i < arr[0].di )
		{
			check++;
		}
		if ( arr[1].den <= i && i < arr[1].di )
		{
			check++;
		}
		if ( arr[2].den <= i && i < arr[2].di )
		{
			check++;
		}
		if ( check == 3 )
		{
			res += (c*3);
		}
		else if ( check == 2 )
		{
			res += (b*2);
		}
		else if ( check == 1 )
		{
			res += a;
		}
	}
	cout << res;
}
