#include <bits/stdc++.h>
using namespace std;

struct thoigian {
	int hour, min, sec, sum;
};

bool cmp(thoigian a, thoigian b) {
	if ( a.sum < b.sum )
	{
		return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	thoigian a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i].hour >> a[i].min >> a[i].sec;
		a[i].sum = a[i].hour*60*60 + a[i].min*60 + a[i].sec;
	}
	sort(a,a+n,cmp);
	for (int i = 0 ; i < n ; i++)
	{
		cout << a[i].hour << " " << a[i].min << " " << a[i].sec << endl;
	}
}
