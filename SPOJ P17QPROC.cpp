#include <bits/stdc++.h>
using namespace std;
const long long Max = 1e7+5;

vector <long long> s(Max,0);

int main() {
	long long a, b, res = 0;
	cin >> a >> b;
	for (long long i = 1 ; i <= Max ; i++)
	{
		s[i] -= i;
        for (long long j = 1 ; j <= Max/i ; j++)
		{
        	s[i*j] += i;
        }
    }
	for (long long i = a ; i <= b ; i++)
	{
		res += abs(s[i]-i);
	}
	cout << res;
}
