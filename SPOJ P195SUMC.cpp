#include <bits/stdc++.h>
using namespace std;

int cnt[3];

int main() {
    int n;
	bool check = true;
	int tmp;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
	{
        cin >> tmp;
        if ( tmp == 25 )
		{
            cnt[0]++;
        }
        if ( tmp == 50 )
		{
            cnt[1]++;
            if ( cnt[0] != 0 )
			{
                cnt[0]--;
            }
            else
			{
                check = false;
            }
        }
        if ( tmp == 100 )
		{
            if ( cnt[1] != 0 && cnt[0] != 0 )
			{
                cnt[1]--;
                cnt[0]--;
            }
            else if ( cnt[1] == 0 && cnt[1] >= 3 )
			{
                cnt[0] -= 3;
            }
            else
			{
                check = false;
            }
        }
    }
    if ( check == true )
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}  
