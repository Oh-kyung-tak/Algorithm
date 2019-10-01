#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int T;
double x, y;
double z;

int main()
{
	cin >> T;

	while (T--)
	{
		cin >> x >> y;
		double l = 0, h = 1000000000;
		int mid;

		z = floor(100 * y / x);

		if (z >= 99)
		{
			cout << "-1" << endl;
		}
		else
		{
			while (l <= h)
			{
				mid = (l + h) / 2;
				double temp = floor(100 * (y + mid) / (x + mid));

				if (temp > z)
					h = mid - 1;
				else
					l = mid + 1;
			}
			cout << int(l) << endl;
		}
		
	}
	
}