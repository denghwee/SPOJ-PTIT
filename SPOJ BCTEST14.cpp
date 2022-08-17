#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long a, b, v;
	cin >> a >> b >> v;
	if ( (v-b) % (a-b) == 0 )
	{
		cout << (v-b) / (a-b);
	}
	else
	{
		cout << (v-b) / (a-b) + 1;
	}
}
