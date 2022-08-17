#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, count = 0, count1 = 0, count2 = 0;
	cin >> a >> b;
	for (int i = 1 ; i <= 6 ; i++)
	{
		if ( abs(i-a) < abs(i-b) )
		{
			count++;
		}
		else if ( abs(i-a) == abs(i-b) )
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	cout << count << " " << count1 << " " << count2;
}
