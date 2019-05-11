#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double distance = sqrt((double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
		int r_sum = r1 + r2;
		int r_min = abs(r1 - r2);

		if ((x1 == x2) && (y1 == y2))
		{
			if (r1 == r2)
				cout << "-1" << endl;
			else if (r1 != r2)
				cout << "0" << endl;
		}
		else
		{
			if (r_min < distance && distance < r_sum)
				cout << "2" << endl;
			else if (r_min == distance || distance == r_sum)
				cout << "1" << endl;
			else if (distance == 0 || distance > r_sum || r_min > distance)
				cout << "0" << endl;
		}
	}
}
