#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int C;
int N;
int diamond[205][105];
int dp[205][105];

int main()
{
	cin >> C;

	while (C--)
	{
		cin >> N;

		memset(diamond, 0, sizeof(diamond));
		memset(dp, 0, sizeof(dp));

		int end = N - 1;

		for (int i = 1; i <= 2 * N - 1; i++)
		{
			if (i <= N)
			{
				for (int j = 1; j <= i; j++)
					cin >> diamond[i][j];
			}
			else
			{
				for (int j = 1; j <= end; j++)
					cin >> diamond[i][j];

				end--;
			}
		}

		end = N - 1;
		dp[1][1] = diamond[1][1];

		for (int i = 2; i <= N; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (j == 1)
					dp[i][j] = dp[i - 1][j] + diamond[i][j];
				else if (j == i)
					dp[i][j] = dp[i - 1][j - 1] + diamond[i][j];
				else
					dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + diamond[i][j];
			}
		}

		for (int i = N + 1; i <= 2 * N - 1; i++)
		{
			for (int j = 1; j <= end; j++)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]) + diamond[i][j];
			end--;
		}

		cout << dp[2 * N - 1][1] << endl;

	}
}