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
int N;

int main()
{
	while (1)
	{
		double M, A, B;
		double tr, air;
		int sec;

		scanf("%lf %lf %lf", &M, &A, &B);

		if (M == 0 && A == 0 && B == 0)
			break;

		tr = M / A;
		air = M / B;

		sec = (int)((tr - air) * 3600 + 0.5);

		printf("%0d:%02d:%02d\n", sec / 3600, sec % 3600 / 60, sec % 60);
	}
}