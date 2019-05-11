#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int a, b;
int k1, k2, k3;
char o1, o2;

int calc(int x, int y, char op)
{
	int minus = 0;

	if (op == '+')
		return x + y;
	else if (op == '-')
		return x - y;
	else if (op == '*')
		return x * y;
	else
		return x / y;
		
}

int main()
{
	cin >> k1 >> o1 >> k2 >> o2 >> k3;

	int a = calc(calc(k1, k2, o1), k3, o2);
	int b = calc(k1, calc(k2, k3, o2), o1);

	if (a >= b)
		printf("%d\n%d", b, a);
	else
		printf("%d\n%d", a, b);
}
