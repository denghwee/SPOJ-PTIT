#include <bits/stdc++.h>
using namespace std;

string sub(string a, string b) {
    string res;
    while ( a.size() < b.size() )
	{
		a = '0' + a;
	}
    while ( b.size() < a.size() )
	{
		b = '0' + b;
	}
    bool neg = false;
    if ( a < b )
	{
        swap(a,b);
        neg = true;
    }
    int borrow = 0;
    for(int i = a.size() - 1 ; i >= 0 ; i--)
	{
        int tmp = a[i] - b[i] -borrow;
        if ( tmp < 0 )
		{
            tmp += 10;
            borrow = 1;
        }
        else
		{
			borrow = 0;
		}
        res = (char)(tmp % 10 + 48) + res;
    }
    if ( neg == 1 )
	{
		res = '-' + res;
	}
    return res;
}
 
string add(string a, string b){
    string res;
    while (a.size() < b.size())
	{
		a = '0' + a;
	}
    while ( b.size() < a.size() )
	{
		b = '0' + b;
	}
    int carry=0;
    for (int i = a.size() - 1 ; i >= 0 ; i--)
	{
        int tmp = a[i] - 48 + b[i] - 48 + carry;
        carry = tmp / 10;
        tmp %= 10;
        res = (char) (tmp + 48) + res;
    }
    if ( carry > 0 )
	{
		res = '1' + res;
	}
    return res;
}
 
 
void process() {
    string a,b;
    cin >> a >> b;
    string res;
    if ( b[0] == '-' )
	{
        res = add(a,b);
    }
	else
	{
		res = sub(a,b);
	}
    if ( res[0] == '-' )
	{
		res.erase(res.begin(),res.begin()+1);
	}
    cout << res;
}
 
int main(){
    int t;
    cin >> t;
    while ( t-- )
    {
        process();
        if ( t != 0 )
        {
        	cout << endl;
		}
    }
}
