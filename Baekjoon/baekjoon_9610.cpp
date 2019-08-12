#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int dp[301];
int N;
int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
int main()
{
	cin >> N;
	
	while (N--)
	{
		int x, y;
		cin >> x >> y;

		if (x == 0 || y == 0)
			axis++;
		else
		{
			if (x > 0)
			{
				if (y > 0)
					q1++;
				else
					q4++;
			}
			else
			{
				if (y > 0)
					q2++;
				else
					q3++;
			}
		}
	}

	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << axis << endl;

}

