#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

int N;
int dp[1001] = { 0,2 };
int cnt = 4;

int gcd(int x, int y)
{
	while (x % y != 0)
	{
		int temp = y;
		y = x % y;
		x = temp;
	}

	return y;
}

int main()
{
	for (int i = 2; i <= 1000; i++)
	{
		int n = 0;
		for (int j = 1; j <= i; j++)
		{
			if (gcd(i, j) == 1)
				n++;
		}
		dp[i] = dp[i - 1] + n;
	}

	cin >> N;

	while (N--)
	{
		int xx;
		cin >> xx;

		cout << dp[xx] * 2 - 1 << endl;
	}
	
}

