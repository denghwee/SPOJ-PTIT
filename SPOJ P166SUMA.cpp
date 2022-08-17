#include <bits/stdc++.h>
using namespace std;

int a[5005];

int main () {
    int n, x, count = 0;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
	{
        cin >> x;
        a[x] = 1;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        if ( a[i] == 0 )
        {
            count++;
        }
    }
    cout << count;
}
