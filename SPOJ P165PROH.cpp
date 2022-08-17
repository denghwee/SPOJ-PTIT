#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		float S1, S2, S3;
		cin >> S1 >> S2 >> S3;
		float a = sqrt(S3*S1/S2);
		float b = S1 / a;
		float c = S3 / a;
		cout << (a+b+c) * 4;
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
