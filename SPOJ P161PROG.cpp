#include <bits/stdc++.h>
using namespace std;

bool ktcp(long long a) {
	
	if ( sqrt(a) == (long long) sqrt(a) )
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool check(long long x) {
	for (long long i = 1; i <= sqrt(x) ; i++)
	{
		if ( x % i == 0 )
		{
			if ( ktcp(i) == 1 && sqrt(i) > 1)
			{
				return false;
			}
			if ( ktcp(x/i) == 1 && sqrt(x/i) > 1)
			{
				return false;
			}
		}
	}
	return true;
}

int main () {
	long long n;
	cin >> n;
	vector <long long> uoc;
	for (long long i = 1 ; i <= sqrt(n) ; i++)
	{
		if ( n % i == 0 )
		{
			if ( i != sqrt(n) )
			{
				uoc.push_back(i);
				uoc.push_back(n/i);
			}
			else
			{
				if ( ktcp(n) == 1 )
				{
					uoc.push_back(i);
				}
				else
				{
					uoc.push_back(i);
					uoc.push_back(n/i);
				}
			}
		}
	}
	sort(uoc.begin(),uoc.end());
	for (long long i = uoc.size() - 1 ; i >= 0 ; i--)
	{
		if ( check(uoc[i]) == true )
		{
			cout << uoc[i];
			break;
		}
	}
}
