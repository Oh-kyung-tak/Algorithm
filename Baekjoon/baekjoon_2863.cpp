#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

double A, B, C, D;
double first, second, third, forth;
double max_num = -1;

int main()
{
	cin >> A >> B >> C >> D;

	first = (A / C) + (B / D);
	second = (C / D) + (A / B);
	third = (D / B) + (C / A);
	forth = (B / A) + (D / C);

	max_num = max({ first, second, third, forth });

	if (max_num == first)
		cout << "0";
	else if (max_num == second)
		cout << "1";
	else if (max_num == third)
		cout << "2";
	else
		cout << "3";
}