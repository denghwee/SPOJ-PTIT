#include <bits/stdc++.h>
using namespace std;

int main() {
	float n, p;
	float tong = 0;
	cin >> n;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> p;
		tong += p;
	}
	printf("%.12f", tong / n);
}
