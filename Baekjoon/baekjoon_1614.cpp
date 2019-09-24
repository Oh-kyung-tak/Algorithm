#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

long long int N, M;
long long int temp;

int main()
{
	cin >> N >> M;

	if (N == 1)
	{
		temp = 1;
		temp += (M * 8) - 1;
	}
	else if (N == 2)
	{
		temp = 2;
		temp += (M * 6) - 1;
		temp -= (M / 2 * 4);
	}
	else if (N == 3)
	{
		temp = 3;
		temp += (M * 4) - 1;
	}
	else if (N == 4)
	{
		temp = 4;
		temp += (M * 2) - 1;
		temp += (M / 2 * 4);
	}
	else
	{
		temp = 5;
		temp += (M * 8) - 1;
	}

	cout << temp << endl;
}