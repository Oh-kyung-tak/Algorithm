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

double a, b;
double M;

int main()
{
	cin >> a >> b;
	M = (b - a) / 400;

	cout << 1 / (1 + pow(10, M));
}