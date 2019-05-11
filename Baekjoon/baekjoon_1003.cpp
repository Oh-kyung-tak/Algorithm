#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int T;
int num[41][2];
int main()
{
	cin >> T;
	num[0][0] = 1;
	num[0][1] = 0;
	num[1][0] = 0;
	num[1][1] = 1;

	for (int i = 2; i <= 40; i++)
	{
		num[i][0] = num[i - 2][0] + num[i - 1][0];
		num[i][1] = num[i - 2][1] + num[i - 1][1];
	}

	while (T--)
	{
		int temp;
		cin >> temp;

		cout << num[temp][0] << " " << num[temp][1] << endl;
	}
}
