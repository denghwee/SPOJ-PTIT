#include <bits/stdc++.h>
using namespace std;

int n, hoanvi[10], check = 0, kt;

void khoitao() {
	for (int i = 0 ; i < n ; i++)
	{
		hoanvi[i] = i + 1;
	}
}

int stop (int pos) {
	if ( pos == -1 )
	{
		return 1;
	}
	return 0;
}

int sinhhoanvi() {
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
    }
    return pos;
}

void in() {
	for (int i = 0 ; i < n ; i++)
	{
		cout << hoanvi[i];
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	khoitao();
	do
	{
		in();
		kt = sinhhoanvi();
	}
	while ( stop(kt) != 1 );
}
