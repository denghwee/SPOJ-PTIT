#include <bits/stdc++.h>
using namespace std;

int main() {
	long long l, r, x, s = 1, check = 0;
	cin >> l >> r >> x;
	long long tmp = x;
	if ( s >= l && s <= r )
	{
        cout << s << " ";
        check++;
    }
    if ( tmp >= l && tmp <= r )
	{
        cout << tmp << " ";
        check++;
    }
    if ( tmp <= r )
	{
        s = tmp;
        while ( (r/s) >= tmp )
		{
            x *= tmp;
            s = x;
            if ( s >= l && s <= r )
			{
                cout << s << " ";
                check++;
            }
        }
    }
    if ( check == 0 )
    {
    	cout << -1;
	}
}
