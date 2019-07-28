#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int dp[1001][1001][2];
int N;

int main()
{
	dp[1][0][1] = 1;
	dp[1][0][0] = 1;

	for (int i = 2; i <= 1000; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			for (int k = 0; k <= 1; k++)
			{
				if (k == 0)
					dp[i][j][k] = dp[i - 1][j][0] + dp[i - 1][j][1];
				else
					dp[i][j][k] = dp[i - 1][j][0] + dp[i - 1][j - 1][1];
			}
		}
	}
	
	cin >> N;

	while (N--)
	{
		int a, b;
		cin >> a >> b;
		cout << dp[a][b][0] + dp[a][b][1] << endl;
	}
}