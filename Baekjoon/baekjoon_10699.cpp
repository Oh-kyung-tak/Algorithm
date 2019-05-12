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

int people;
int a, b;
int cnt = 0;

int main()
{
	time_t current_time;
	struct tm *current_tm;

	current_time = time(NULL);

	current_tm = localtime(&current_time);
	cout << current_tm->tm_year + 1900 << "-";
	if (current_tm->tm_mon < 10)
		cout << "0" << current_tm->tm_mon + 1 << "-";
	else
		cout << current_tm->tm_mon + 1 << "-";
	cout << current_tm->tm_mday;
}

