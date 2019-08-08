#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

long long int n, m;
long long int a, b, c;

long long int two_check(long long int n)
{
	long long int sum = 0;
	for (long long int i = 2; n / i >= 1; i *= 2)
		sum += n / i;

	return sum;
}

long long int five_check(long long int n)
{
	long long int sum = 0;
	for (long long int i = 5; n / i >= 1; i *= 5)
		sum += n / i;

	return sum;
}

int main()
{
	cin >> n >> m;
	a = n;
	b = n - m;
	c = m;

	long long int two = two_check(a) - two_check(b) - two_check(c);
	long long int five = five_check(a) - five_check(b) - five_check(c);

	cout << min(two, five);
}

