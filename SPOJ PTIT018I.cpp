#include <bits/stdc++.h>
using namespace std;

long long BCNN(long long a, long long b){
	return (a*b)/__gcd(a,b);
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	int t, x, y, z, n;
	cin >> t;
	while ( t-- )
	{
	    cin >> x >> y >> z >> n;
	    long long tmp = BCNN(BCNN(x,y),z);
	    while ( true )
		{
			string s;
   			ostringstream convert;
    		convert << tmp;
    		s = convert.str();
			if ( s.size() < n )
			{
				tmp += BCNN(BCNN(x,y),z);
			}
			if( s.size() == n )
			{
				cout << s;
				break;
			}
			if( s.size() > n )
			{
				cout << -1;
				break;
			}
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
