#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long int gcd(long long int a, long long int b)
{
	long long int temp;

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

	long long int a, b;
	scanf("%lld %lld", &a, &b);

	for (int i = 0; i < gcd(a, b); i++)
		printf("1");
}
