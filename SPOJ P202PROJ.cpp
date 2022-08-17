#include <bits/stdc++.h>
using namespace std;

int main() {
	long long res = 0;
	string s;
	cin >> s;
	int count1[s.size()] = {0}, count2[s.size()] = {0};
	for (int i = 1 ; i < s.size() ; i++)
	{
        count1[i] = count1[i-1];
        count2[i] = count2[i-1];
        if ( s[i] == '1' )
		{
			count1[i]++;
		}
		if ( s[i] == '2' ) 
		{
			count2[i]++;
		}
	}
    for (int i = 0 ; i < s.size() ; i++)
	{
        if ( s[i] == '1' )
		{
            res += ( count2[s.size()-1] - count2[i] );
        }
    }
    cout << res;
}
