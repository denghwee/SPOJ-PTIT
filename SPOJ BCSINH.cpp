#include <bits/stdc++.h>
using namespace std;

void nhiphan(int A[], int n) {
	A[n-1]++;
	for (int i = n - 1 ; i >= 0 ; i--)
	{
		if ( A[i] > 1 )
		{
			A[i-1]++;
			A[i] -= 2;
		}
	}
}

void xuat(int A[], int n) {
	for (int i = 0 ; i < n ; i++)
	{
		cout << A[i];
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	int *A = new int[n];
	for (int i = 0 ; i < n ; i++)
	{
		A[i] = 0;
	}
	for (int i = 0 ; i < pow(2,n) ; i++)
	{
		xuat(A,n);
		nhiphan(A,n);
	}
}
