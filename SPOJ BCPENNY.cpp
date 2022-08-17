#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- )
	{
		int tt, count = 0, TTT = 0, TTH = 0, THT = 0, THH = 0, HTT = 0, HTH = 0, HHT = 0, HHH = 0;
		string s, s1;
		cin >> tt;
		cin.ignore();
		cin >> s;
		for (int i = 0 ; i < s.size() ; i++)
		{
			count++;
			s1 += s[i];
			if ( count == 3 )
			{
				if ( s1 == "TTT" )
				{
					TTT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "TTH" )
				{
					TTH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "THT" )
				{
					THT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "THH" )
				{
					THH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HTT" )
				{
					HTT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HTH" )
				{
					HTH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HHT" )
				{
					HHT++;
					s1 = "";
					count = 0; 
				}
				else
				{
					HHH++;
					s1 = "";
					count = 0; 
				}
			}
		}
		s1 = "";
		count = 0;
		for (int i = 1 ; i < s.size() ; i++)
		{
			count++;
			s1 += s[i];
			if ( count == 3 )
			{
				if ( s1 == "TTT" )
				{
					TTT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "TTH" )
				{
					TTH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "THT" )
				{
					THT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "THH" )
				{
					THH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HTT" )
				{
					HTT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HTH" )
				{
					HTH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HHT" )
				{
					HHT++;
					s1 = "";
					count = 0; 
				}
				else
				{
					HHH++;
					s1 = "";
					count = 0; 
				}
			}
		}
		s1 = "";
		count = 0;
		for (int i = 2 ; i < s.size() ; i++)
		{
			count++;
			s1 += s[i];
			if ( count == 3 )
			{
				if ( s1 == "TTT" )
				{
					TTT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "TTH" )
				{
					TTH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "THT" )
				{
					THT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "THH" )
				{
					THH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HTT" )
				{
					HTT++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HTH" )
				{
					HTH++;
					s1 = "";
					count = 0; 
				}
				else if ( s1 == "HHT" )
				{
					HHT++;
					s1 = "";
					count = 0; 
				}
				else
				{
					HHH++;
					s1 = "";
					count = 0; 
				}
			}
		}
		cout << tt << " " << TTT << " " << TTH << " " << THT << " " << THH << " " << HTT << " " << HTH << " " << HHT << " " << HHH; 
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
