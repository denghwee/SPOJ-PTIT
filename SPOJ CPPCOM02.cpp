#include <bits/stdc++.h>
using namespace std;

int n, k, check = 0;
int tohop[21];

void khoitao() {
	for (int i = 1 ; i <= k ; i++)
	{
		tohop[i] = i;
	}
}

void sinhtohop() {
    int i = k;
    while ( i > 0 && tohop[i] == n - k + i )
	{
		i--;
	}
    if ( i > 0 )
    {
    	tohop[i]++;
	    for (int j = i + 1 ; j <= k ; j++)
		{
			tohop[j] = tohop[i] + j - i;
		}
	}
	else
	{
		check++;
	}
}

void in() {
	for (int i = 1 ; i <= k ; i++)
	{
		cout << tohop[i];
	}
	cout << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		check = 0;
		cin >> n >> k;
		khoitao();
		while ( check == 0 )
		{
			in();
			sinhtohop();
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
