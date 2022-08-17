#include <bits/stdc++.h>
using namespace std;

int minPrime[100001];

void sangnguyento() {
	for (long long i = 2; i * i <= 100000; ++i) {
    if (minPrime[i] == 0) {
        for (long long j = i * i; j <= 100000; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
	}
	for (long long i = 2; i <= n; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}
}
 
void factorize(long long n,) {
    vector<int> res;
    while (n != 1) {
            res.push_back(minPrime[n]);
            n /= minPrime[n];
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
		factorize(n,minPrime);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
} 
