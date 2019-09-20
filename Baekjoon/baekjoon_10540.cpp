#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <map>
#include <stack>
#include <sstream>

using namespace std;

int N;
int x_min = 1000, y_min = 1000;
int x_max = 0, y_max = 0;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;

		x_min = min(x, x_min);
		y_min = min(y, y_min);
		x_max = max(x, x_max);
		y_max = max(y, y_max);
	}

	cout << pow(max(x_max - x_min, y_max - y_min), 2) << endl;
}