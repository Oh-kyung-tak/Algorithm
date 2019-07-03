#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int calender[7] = { 4,5,6,0,1,2,3 };
int day[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int a, b;
		int sum = 0;

		cin >> a >> b;
		for (int i = 1; i < a; i++)
			sum += day[i];

		sum += b - 1;

		cout << '#' << Test_case << " " << calender[sum%7] << endl;
	}
}