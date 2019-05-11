#include <iostream>
#include <string>

using namespace std;

string s[8] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main() 
{
	int sum = 0;
	int x, y;

	scanf("%d %d", &x, &y);
	
	for (int i = 1; i < x; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			sum += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else
			sum += 28;
	}

	sum += y - 1;

	cout << s[sum % 7];
	
	
}
