#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		int x1, y1, x2, y2, x3, y3;
		int x_ans, y_ans;

		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		if (x1 == x2)
			x_ans = x3;
		else if (x2 == x3)
			x_ans = x1;
		else
			x_ans = x2;

		if (y1 == y2)
			y_ans = y3;
		else if (y2 == y3)
			y_ans = y1;
		else
			y_ans = y2;


		cout << x_ans << " " << y_ans << endl;
	}
}