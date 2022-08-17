#include <bits/stdc++.h>
using namespace std;

void xoaxuongdong(char x[]) {
	int len = strlen(x);
	if (x[len-1] == '\n')
	{
		x[len-1] = '\0';
	}
}

int main() {
	char x[100000];
	fgets(x, sizeof(x), stdin);
	xoaxuongdong(x);
	cout << x;
}
