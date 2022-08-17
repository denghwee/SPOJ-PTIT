#include <bits/stdc++.h>
using namespace std;

string johnteam, otherteam;
int n;

struct doibong{
	string ten;
	int diem;
};

bool cmp(doibong a, doibong b) {
	if ( a.diem > b.diem )
	{
		return true;
	}
	else if ( a.diem == b.diem )
	{
		if ( a.ten < b.ten )
		{
			return true;
		}
	}
	return false;
}

void sortandprint(doibong a[], int tmp1, int tmp2, int b, int c) {
	int tmp3 = tmp1 + b;
	int tmp4 = tmp2 + c;
	for (int i = 0 ; i < n ; i++)
	{
		if ( a[i].ten == johnteam )
		{
			a[i].diem = tmp3;
		}
		if ( a[i].ten == otherteam )
		{
			a[i].diem = tmp4;
		}
	}
	sort(a,a+n,cmp);
	for (int i = 0 ; i < n ; i++)
	{
		if ( a[i].ten == johnteam )
		{
			cout << i + 1 << " ";
		}
	}
}

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		cin >> n;
		cin >> johnteam >> otherteam;
		doibong a[n];
		int tmp1, tmp2;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i].ten >> a[i].diem;
			if ( a[i].ten == johnteam )
			{
				tmp1 = a[i].diem;
			}
			if ( a[i].ten == otherteam )
			{
				tmp2 = a[i].diem;
			}
		}
		sortandprint(a,tmp1,tmp2,3,0);
		sortandprint(a,tmp1,tmp2,0,3);
		sortandprint(a,tmp1,tmp2,1,1);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
