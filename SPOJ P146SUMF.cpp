#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	while ( cin >> n )
	{
		int arr[10] = {};
		for (int i = 1 ; ; i++)
		{
			long long tmp = n;
			tmp *= i;
			while ( tmp != 0 )
			{
				arr[tmp%10]++;
				tmp /= 10;
			}
			if ( arr[0] != 0 && arr[1] != 0 && arr[2] != 0 && arr[3] != 0 && arr[4] != 0 && arr[5] != 0 && arr[6] != 0 && arr[7] != 0 && arr[8] != 0 && arr[9] != 0 )
			{
				cout << i << endl;
				break;
			}
		}
	}
}
