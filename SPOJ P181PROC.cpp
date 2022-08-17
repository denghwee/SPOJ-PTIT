#include <bits/stdc++.h>
using namespace std;

vector <long long> dayso;

int main() {
	long long n, k, check = 0;
	cin >> n >> k;
	dayso.push_back(0);
	for (long long i = 2 ; i <= k ; i++)
	{
		if ( check == 0 )
		{
			dayso.push_back(n%i);
			for (long long j = 0 ; j < dayso.size() - 1 ; j++)
			{
				if ( dayso[j] == (n%i) )
				{
					check++;
				}
			}
		}
		else
		{
			break;
		}
	}
	if ( check == 0 )
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
