#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b)
{
	int temp;

	if (b > a)
	{	
		temp = a;
		a = b;
		b = temp;
	}

	while (a%b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return b;

}
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		printf("%d\n", a * b / gcd(a, b));
	}
}
