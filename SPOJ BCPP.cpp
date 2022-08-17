#include <bits/stdc++.h>
using namespace std;

int boi[1000001];

void sang() {
    for (int i = 1 ; i <= 1000000 ; i++)
	{
        for(int j = 1 ; j <= 1000000 ; j += i)
		{
        	boi[j] += i;
    	}
    }
}

int main() {
	sang();
	int l, r, res = 0;
	cin >> l >> r;
	for (int i = l; i <= r ; i++)
	{
		if ( boi[i] - i > i )
		{
			res++;
		}
	}
	cout << res;
}
