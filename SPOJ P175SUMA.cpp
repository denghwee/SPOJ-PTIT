#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, diff_pair = 0, same_pair = 0;
	cin >> n >> k;
	string s;
	cin >> s;
	for (int i = 0 ; i < s.size() / 2 ; i++)
	{
		if ( s[i] != s[s.size()-1-i] )
		{
			diff_pair++;
		}
		else
		{
			same_pair++;
		}
	}
	if ( k > n )
	{
		cout << "No";
	}
	else if ( k == n )
	{
		cout << "Yes";
	}
	else
	{
		int check = 0;
		for (int i = 0 ; i <= diff_pair ; i++)
		{
			int change = i + (diff_pair-i) * 2;
			if ( change == k )
			{
				check++;
				break;
			}
			else
			{
				if ( change < k )
				{
					int excess = k - change;
					if ( n % 2 != 0 )
					{
						int change_max = same_pair * 2;
						if ( excess <= change_max + 1 )
						{
							check++;
							break;
						}
					}
					else
					{
						int change_max = same_pair * 2;
						if ( excess <= change_max && excess % 2 == 0 )
						{
							check++;
							break;
						}
					}
				}
			}
		}
		if ( check != 0 )
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
}
