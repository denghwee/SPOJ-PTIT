#include<bits/stdc++.h>

using namespace std;


void solve(long long n){
    int res = 0;
    for(int i = 2; i  <= sqrt(n); i++){
        while(n % i == 0){
            res = i;
            n /= i;
        }
    }
    if(n!=1) cout << n << endl;
    else cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        solve(a);
    }
    return 0;
}
