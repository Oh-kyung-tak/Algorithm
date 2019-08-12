#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int cnt = 1;

int main()
{
	while (1)
	{
		double a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		cout << fixed;
		cout.precision(3);

		cout << "Triangle #" << cnt << endl;
		if (a == -1)
		{
			if (pow(c, 2) - pow(b, 2) > 0)
				cout << "a = " << sqrt(pow(c, 2) - pow(b, 2)) << endl;
			else
				cout << "Impossible." << endl;
		}
		else if (b == -1)
		{
			if (pow(c, 2) - pow(a, 2) > 0)
				cout << "b = " << sqrt(pow(c, 2) - pow(a, 2)) << endl;
			else
				cout << "Impossible." << endl;
		}
		else
		{
			cout << "c = " << sqrt(pow(a, 2) + pow(b, 2)) << endl;
		}

		cout << endl;

		cnt++;
	}
}