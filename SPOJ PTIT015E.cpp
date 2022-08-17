#include <bits/stdc++.h>
using namespace std;

long long uocso[1000005], tonguocso[1000005], p[1000005], q[1000005];

void sang() {
	p[1] = 1;
	q[1] = 1; 
	uocso[1] = 1;
	tonguocso[1] = 1;
    for (int i = 2 ; i <= 1000005 ; i++)
	{
		uocso[i]++;
		tonguocso[i]++;
        for(int j = i ; j <= 1000005 ; j += i)
        {
        	uocso[j]++;
        	tonguocso[j] += i;
        }
    }
    for (int i = 2 ; i <= 1000005 ; i++)
	{
		p[i] = p[i-1] + uocso[i];
		q[i] = q[i-1] + tonguocso[i];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	sang();
	long long t;
	cin >> t;
	while ( t-- )
	{
		int a, b;
		cin >> a >> b;
		cout << p[b] - p[a-1] << " " << q[b] - q[a-1];
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
