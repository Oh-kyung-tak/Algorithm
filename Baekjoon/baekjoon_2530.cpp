#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>
#include <ctime>

using namespace std;

int N;
int carry_hour = 0;
int carry_minute = 0;
int hour, minute, sec;
int d_hour, d_minute, d_sec;
int D;

int main()
{
	cin >> hour >> minute >> sec;
	cin >> D;

	d_hour = D / 3600;
	D %= 3600;
	d_minute = D / 60;
	D %= 60;
	d_sec = D;

	if (sec + d_sec >= 60)
	{
		sec += d_sec;
		sec %= 60;
		carry_minute++;
	}
	else
		sec += d_sec;

	if (minute + d_minute + carry_minute >= 60)
	{
		minute += d_minute + carry_minute;
		minute %= 60;
		carry_hour++;
	}
	else
		minute += d_minute + carry_minute;

	if (hour + d_hour + carry_hour >= 24)
	{
		hour += d_hour + carry_hour;
		hour %= 24;
	}	
	else
		hour += d_hour + carry_hour;

	cout << hour << " " << minute << " " << sec << endl;
	
}

