#include <bits/stdc++.h>
using namespace std;

int main() {
	int c, k, count = 0;
	cin >> c >> k;
	long long min = (long long) pow(10,k);
    long long th1 = ( c / min ) * min, th2 = th1 + min;
    if ( th2 - c <= c - th1 )
    {
		cout << th2;
	}
    else
	{
		cout << th1;
	}
}
