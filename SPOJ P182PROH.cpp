#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string hour, min, sec, time;
	for (int i = 0 ; i <= 1 ; i++)
	{
		hour += s[i];
	}
	for (int i = 3 ; i <= 4 ; i++)
	{
		min += s[i];
	}
	for (int i = 6 ; i <= 7 ; i++)
	{
		sec += s[i];
	}
	for (int i = 8 ; i <= 9 ; i++)
	{
		time += s[i];
	}
	if ( time == "AM" )
	{
		if ( hour == "12" )
		{
			hour = "00";
		}
		cout << hour << ":" << min << ":" << sec;
	}
	else
	{
		if ( hour == "01" ) hour = "13";
		if ( hour == "02" ) hour = "14";
		if ( hour == "03" ) hour = "15";
		if ( hour == "04" ) hour = "16";
		if ( hour == "05" ) hour = "17";
		if ( hour == "06" ) hour = "18";
		if ( hour == "07" ) hour = "19";
		if ( hour == "08" ) hour = "20";
		if ( hour == "09" ) hour = "21";
		if ( hour == "10" ) hour = "22";
		if ( hour == "11" ) hour = "23";	
		cout << hour << ":" << min << ":" << sec;	
	}
}
