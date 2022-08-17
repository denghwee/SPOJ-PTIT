#include<bits/stdc++.h>
using namespace std;

long long l, r;

void process() {
	long long tmp = 0, s[r], a[r];
	for (int i = 2 ; i <= r ; i++)
	{
		s[i] = 1;
	}
	for (int i = 2 ; i <= sqrt(r) ; i++)
	{
		if ( s[i] == 1 )
		{
			for (int j = 2 ; j <= r/i ; j++)
			{
				s[j*i] = 0;
			}
		}
	}
	for (int i = l ; i <= r ; i++)
	{
		if ( s[i] == 1 )
		{
			a[tmp++] = i;
		}
	}
	int count = 0;
	for (int i = 0 ; i < tmp - 1 ; i++)
	{
		for (int j = i + 1 ; j < tmp ; j++)
		{
			if ( a[j] - a[i] == 6 )
			{
				count++;
				break;
			}
			if ( a[j] - a[i] > 6 )
			{
				break;
			}	
		}
	}
	cout << count;
}

int main() {
	long long t = 0;
	cin >> t;
	while ( t-- )
	{
		cin >> l >> r;
		process();
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
 
