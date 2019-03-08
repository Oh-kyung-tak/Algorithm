#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
int map[101][101];
long long int dp[101][101];

int main()
{
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			scanf("%d", &map[i][j]);
	}
	
	dp[1][1] = 1;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int jumpcount = map[i][j];
			
			if (dp[i][j] >= 1 && jumpcount != 0)
			{
				if (i + jumpcount <= N)
					dp[i + jumpcount][j] += dp[i][j];

				if (j + jumpcount <= N)
					dp[i][j + jumpcount] += dp[i][j];
			}
		}
	}

	printf("%lld", dp[N][N]);
}
