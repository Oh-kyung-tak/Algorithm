#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>

using namespace std;

int C;
int dp[101][101];
int triangle[101][101];

int main()
{
	cin >> C;

	while (C--)
	{
		int N;
		int ans = -1;
		memset(dp, 0, sizeof(dp));
		memset(triangle, 0, sizeof(triangle));

		cin >> N;

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= i; j++)
				cin >> triangle[i][j];
		}

		dp[1][1] = triangle[1][1];

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (j == 1)
					dp[i][j] = dp[i - 1][j] + triangle[i][j];
				else if (j == i)
					dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
				else
					dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];

				ans = max(ans, dp[i][j]);
			}
		}

		cout << ans << endl;
	}
}