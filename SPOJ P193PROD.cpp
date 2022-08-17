#include <bits/stdc++.h>
using namespace std;

int main() {
	int w;
	cin >> w;
	for (int i = 2 ; i < w ; i += 2)
	{
		int tmp = w - i;
		if ( tmp % 2 == 0 )
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
