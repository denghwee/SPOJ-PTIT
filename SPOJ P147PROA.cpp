#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, x, y, z;
	cin >> a >> b >> c;
	x = a * (int) sqrt(b*c/a) / b;
	y = b / (int) sqrt(b*c/a);
	z = (int) sqrt(b*c/a);
	cout << x*4+y*4+z*4;
}
