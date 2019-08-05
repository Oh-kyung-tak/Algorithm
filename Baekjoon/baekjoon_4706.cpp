#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;


int main()
{
	while (1)
	{
		double x, y;
		cin >> x >> y;

		if (x == 0 && y == 0)
			break;

		cout << fixed;
		cout.precision(3);
		cout << sqrt(1 - pow(y / x, 2)) << endl;
	}
}
