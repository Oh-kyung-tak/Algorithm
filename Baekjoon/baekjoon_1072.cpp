#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
double x, y;
double z;
double l = 0, h = 1000000000;
int mid;

int main()
{
	cin >> x >> y;
	z = floor(100 * y / x);

	if (z >= 99)
	{
		cout << "-1" << endl;
		return 0;
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
	}
	cout << int(l) << endl;
}