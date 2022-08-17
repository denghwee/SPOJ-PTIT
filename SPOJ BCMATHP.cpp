#include <bits/stdc++.h>
using namespace std;

int a, b;

int chusodautien(int a) {
    switch (a)
    {
        case 0:
        case 4:
        case 7:
        {
			return 1;
		}
        case 1:
        case 8:
    	{
			return 2;
		}
		case 5:
        {
			return 3;
		}
		case 2:
        {
			return 4;
		}
		case 9:
        {
			return 5;
		}
		case 6:
        {
			return 6;
		}
		case 3:
        {
			return 8;
		}
    }
}

int main() {
	cin >> a >> b;
	int i = 0;
	long long prod = 1;
	for (int i = a + 1 ; i <= 62 ; i++)
	{
		if ( i == 46 || i == 56 )
		{
			if ( b == 7 )
			{
				cout << i;
				return 0;
			}
		}
		else if ( i == 53 )
		{
			if ( b == 9 )
			{
				cout << i;
				return 0;
			}
		}
		else if ( chusodautien(i%10) == b )
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
}
