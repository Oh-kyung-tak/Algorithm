#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	
	while (b != 0)
	{
		int n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int lcd(int a, int b)
{
	return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
	int lcd_num = arr[0];

	for (int i = 1; i < arr.size(); i++)
		lcd_num = lcd(lcd_num, arr[i]);
	
	return lcd_num;
}