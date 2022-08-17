#include <bits/stdc++.h>
using namespace std;

void factorize(int n, int minPrime[]) {
    vector<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    for (int i = 0 ; i < res.size() ; i++)
	{
		cout << res[i] << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n;
		cin >> n;
		int minPrime[n + 1];
		factorize(n,minPrime);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
