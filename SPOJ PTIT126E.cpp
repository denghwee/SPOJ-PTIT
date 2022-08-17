#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	while ( true )
	{
		int check = 0;
		double Y = 0, N = 0, P = 0, A = 0;
		string s;
		if ( check == 0 )
		{
			getline(cin,s);
			check++;
		}
		else
		{
			cin.ignore();
			getline(cin,s);
		}
		if ( s[0] == '#' )
		{
			return 0;
		}
		for (int i = 0 ; i < s.size() ; i++)
		{
			if ( s[i] == 'Y' )
			{
				Y++;
			}
			else if ( s[i] == 'N' )
			{
				N++;
			}
			else if ( s[i] == 'P' )
			{
				P++;
			}
			else
			{
				A++;
			}
		}
		if ( A >= (float) s.size()/2 )
		{
			cout << "need quorum";
		}
		else if ( Y > N )
		{
			cout << "yes";
		}
		else if ( Y < N )
		{
			cout << "no";
		}
		else
		{
			cout << "tie";
		}
		cout << endl;
	}
}
