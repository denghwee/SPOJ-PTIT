#include <bits/stdc++.h>
using namespace std;

int main() {
	while ( true )
	{
		int check = 0;
		string s, v;
		getline(cin,s);
		if ( s == "." )
		{
			return 0;
		}
		for (int i = 0 ; i < s.size() ; i++)
		{
			if ( s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']' )
			{
				v.push_back(s[i]);
			}
		}
		int x;
        while ( v.size() > 0 )
		{
            x = 0;
            while ( v[x] != ')' && v[x] != ']' && x < v.size() )
			{
                x++;
            }
            if (v[x-1] == '(' && v[x] == ')' || v[x-1] == '[' && v[x]== ']' )
			{
                v.erase(v.begin()+x);
                v.erase(v.begin()+x-1);
            }
			else
			{
                check++;
                break;
            }
        }
		if ( check != 0 )
		{
			cout << "no" << endl;
		}
		else
		{
			cout << "yes" << endl;
		}
	}
}
