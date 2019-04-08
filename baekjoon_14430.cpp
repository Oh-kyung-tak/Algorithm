#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int map[301][301];
int dp[301][301];
int N, M;
int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			scanf("%d", &map[i][j]);

	dp[1][1] = map[1][1];

	for (int i = 2; i <= N; i++)
		dp[i][1] = dp[i - 1][1] + map[i][1];

	for (int i = 2; i <= M; i++)
		dp[1][i] = dp[1][i - 1] + map[1][i];

	for (int i = 2; i <= N; i++)
	{
		for (int j = 2; j <= M; j++)
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + map[i][j];
	}

	printf("%d", dp[N][M]);
}
	

	
