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

double A, B, C;
double i, j, k;

double d[3];
double min_cnt;

int main()
{
	cin >> A >> B >> C;
	cin >> i >> j >> k;

	d[0] = A / i;
	d[1] = B / j;
	d[2] = C / k;

	min_cnt = min({ d[0], d[1], d[2] });
	cout << fixed;
	cout.precision(6);
	cout << A - min_cnt * i << " " << B - min_cnt * j << " " << C - min_cnt * k << endl;
}