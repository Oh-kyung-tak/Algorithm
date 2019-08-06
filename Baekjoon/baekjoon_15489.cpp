#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

long long int pas[32][32];
int a, b, c;

int cnt = 0;
long long int sum = 0;

int main()
{
	cin >> a >> b >> c;

	pas[1][1] = 1;

	for (int i = 2; i <= 30; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i)
				pas[i][j] = 1;
			else
				pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
		}
	}


	for (int i = a; i < a + c; i++)
	{
		for (int j = b; j <= b + cnt; j++)
		{
			sum += pas[i][j];
		}
		cnt++;
	}
	cout << sum << endl;
}