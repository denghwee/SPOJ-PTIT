#include<bits/stdc++.h>
using namespace std;

long long BCNN(long long a, long long b) {
    long long tmp = a*b/__gcd(a,b);
    return tmp;
}

int main() {
    long long n, k, res = LONG_LONG_MAX;
    cin >> n >> k;
    for (int i = 0 ; i <= 8 ; i++)
	{
        res = min(res,BCNN(n,(long long)pow(10,k)));
    }
    cout << res;
}
