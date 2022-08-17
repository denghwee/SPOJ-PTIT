#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, j, h, k;
	cin >> n;
	for (int i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j < n - i ; j++)
		{
			cout << "  ";
		}
		for (h = 0 ; h < i ; h++)
		{
			cout << h << " ";
		}
		for (k = h ; k >= 0 ; k--)
		{
			cout << k << " ";
		}
		cout << endl;
	}
	for (int i = n - 1 ; i >= 0 ; i--)
	{
		for (j = n - i ; j > 0 ; j--)
		{
			cout << "  ";
		}
		for (h = 0 ; h < i ; h++)
		{
			cout << h << " ";
		}
		for (k = h ; k >= 0 ; k--)
		{
			cout << k << " ";
		}
		cout << endl;
	}
}
 
