#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int a, b;

int gcd(int a, int b)
{
	if (a < b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	while (b != 0)
	{
		int vv = a%b;
		a = b;
		b = vv;
	}

	return a;
}

int lcm(int a, int b)
{
	return (a*b) / gcd(a, b);
}

int main()
{
	cin >> a >> b;

	int tempa = a;
	int tempb = b;

	printf("%d\n", gcd(tempa, tempb));
	printf("%d", lcm(tempa, tempb));
}
