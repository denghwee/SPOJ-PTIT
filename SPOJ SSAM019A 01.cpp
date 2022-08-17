#include <bits/stdc++.h>
using namespace std;

long long rutgon(string s, int m) {
    long long res = 0;
    for (int i = 0 ; i < s.size() ; i++)
	{
        res = (res * 10 + (s[i] - '0')) % m;
    }
    return res;
}

void process() {
    string s;
    cin >> s;
    int n23 = rutgon(s,4);
    int n4 = rutgon(s,2);
    int res = 1;
    if (s == "0")
	{
        res += 1;
    }
	else if (n23 == 1)
	{
        res += 2;
    }
	else if (n23 == 2)
	{
        res += 4;
    }
	else if (n23 == 3)
	{
        res += 8;
    }
	else if (n23 == 0)
	{
        res += 6;
    }
    if (n23 == 0)
	{
        res += 1;
    }
	else if (n23 == 1)
	{
        res += 3;
    }
	else if (n23 == 2)
	{
        res += 9;
    }
	else if (n23 == 3)
	{
        res += 7;
    }
    if (n4 == 0)
	{
        res += 1;
    }
	else if (n4 == 1)
	{
        res += 4;
    }
    cout << res % 5;
}

int main() {
    int t;
    cin >> t;
    while (t--)
	{
        process();
        if ( t != 0 )
        {
        	cout << endl;
		}
    }
}
