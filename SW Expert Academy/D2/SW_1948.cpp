#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		int A_month, A_day, B_month, B_day;
		int sum = 0;

		cin >> A_month >> A_day >> B_month >> B_day;

		if (A_month == B_month)
			sum += (B_day - A_day) + 1;
		else
		{
			sum += month[A_month] - A_day + 1;
			for (int i = A_month + 1; i <= B_month - 1; i++)
				sum += month[i];
			sum += B_day;
		}

		cout << "#" << k << " " << sum << endl;
		
	}
}