#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
	int money, zero;
	int ban = 5;
	int ten = 1;

	cin >> money >> zero;

	if (zero > 0)
	{
		for (int i = 0; i < zero - 1; i++)
			ban *= 10;

		for (int i = 0; i < zero; i++)
			ten *= 10;

		money += ban;
		money -= money % ten;
	}

	cout << money;
}
