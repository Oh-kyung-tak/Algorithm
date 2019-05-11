#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
long long int a, b, c, d;

long long int gcd(int a, int b)
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
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

long long int lcd(int a, int b)
{
	return (a * b) / gcd(a, b);
}


int main()
{
	cin >> a >> b;
	cin >> c >> d;

	long long int lcd_num_b = lcd(b, d);
	long long int lcd_num_u = a * (lcd_num_b / b) + c * (lcd_num_b / d);

	cout << lcd_num_u / gcd(lcd_num_b, lcd_num_u) << " " << lcd_num_b / gcd(lcd_num_b, lcd_num_u) << endl;
}
