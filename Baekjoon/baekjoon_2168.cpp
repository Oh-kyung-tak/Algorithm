#include <iostream>

using namespace std;

int gcd(long long int x, long long int y)
{
	if (x < y)
	{
		long long int temp;
		temp = x;
		x = y;
		y = temp;
	}

	while (y != 0)
	{
		long long int temp;
		temp = x % y;
		x = y;
		y = temp;
	}
	
	return x;
}

int main()
{
	long long int x, y;

	cin >> x >> y;

	cout << x + y - gcd(x, y) << endl;

	return 0;
}