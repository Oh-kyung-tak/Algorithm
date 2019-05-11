#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
	double a;
	scanf("%lf", &a);
	printf("%6f\n%6f", M_PI*a*a, a*a*2);
}
