#include <bits/stdc++.h>
using namespace std;

int sochinhphuong(long long n) {
	if ( sqrt(n) == (int)sqrt(n) )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
 
int main() {
	int t;
	cin >> t;
	while( t-- )
	{
		long long x, count = 0;
		cin >> x;
		for (int i = 1 ; i < sqrt(x) ; i++)
		{
			if( sochinhphuong(x-pow(i,2)) == 1 ) 
			{
				int check = 0;
				for (int j = 1 ; j < i ; j++) if(sqrt(x-pow(i,2))==j)
				{
					check++;
					break;
				}
				if( check == 0 ) 
				{
					count++;
				}
			}
		}
		if( sochinhphuong(x) == 1 )
		{
			count++;
		}
		cout << count;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
