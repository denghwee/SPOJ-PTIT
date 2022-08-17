#include <bits/stdc++.h>
using namespace std;

vector <int> A;
vector <int> B;

int main() {
	int a, b;
	cin >> a >> b;
	while ( a != 0 )
	{
		A.push_back(a%10);
		a /= 10;
	}
	while ( b != 0 )
	{
		B.push_back(b%10);
		b /= 10;
	}
	for (int i = 0 ; i < A.size() ; i++)
	{
		a += (int) A[i]*pow(10,A.size()-i-1);
	}
	for (int i = 0 ; i < B.size() ; i++)
	{
		b += (int) B[i]*pow(10,B.size()-i-1);
	}
	if ( a > b )
	{
		cout << a;
	}
	else
	{
		cout << b;
	}
}
