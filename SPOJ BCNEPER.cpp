#include <bits/stdc++.h>
using namespace std;

void  khoitao(int hoanvi[], string num, int n) {
	for (int i = 0 ; i < num.length() ; i++)
	{
		hoanvi[i] = (num[i]-'0');
	}
}

void in(int hoanvi[], int n, int tt) {
	cout << tt << " ";
	for (int i = 0 ; i < n ; i++)
	{
		cout << hoanvi[i];
	}
}

void sinhhoanvi(int hoanvi[], int n, int tt) {
    int pos = -1;
    for (int i = n - 1 ; i > 0 ; i--)
	{
        if ( hoanvi[i-1] < hoanvi[i] )
		{
            pos = i - 1;
            break;
        }
    }
    if ( pos != -1 )
	{
        for (int i = n - 1 ; i >= 0 ; i--)
		{
            if ( hoanvi[i] > hoanvi[pos] )
			{
                swap(hoanvi[i],hoanvi[pos]);
                break;
            }
        }
        for (int i = pos + 1 ; i < n ; i++)
		{
            for (int j = pos + 1; j < n - 1 ; j++)
			{
                if ( hoanvi[j] > hoanvi[j+1] )
				{
                    swap(hoanvi[j],hoanvi[j+1]);
                }
            }
        }
        in(hoanvi,n,tt);
    }
    else
    {
    	cout << tt << " BIGGEST";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while ( t-- )
	{
		int tt;
		string num;
		cin >> tt;
		cin.ignore();
		getline(cin,num);
		int hoanvi[90];
		int n = num.size();
		khoitao(hoanvi,num,n);
		sinhhoanvi(hoanvi,n,tt);
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
