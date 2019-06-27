#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		int a, b, c, d;
		int h = 0, m = 0;

		cin >> a >> b >> c >> d;

		if (b + d >= 60)
		{
			m = (b + d) - 60;
			h += 1;
		}
		else
			m = b + d;

		h += a + c;

		if (h > 24)
			h -= 24;
		else if (h > 12)
			h -= 12;

		cout << "#" << k << " " << h << " " << m << endl;
	}
}