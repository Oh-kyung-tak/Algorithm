#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <stack>
#include <math.h>
#include <algorithm>

using namespace std;
int map[501][501];
int dp[501][501];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int N;
int max_cnt = -1;

int check(int x, int y)
{
	if (dp[x][y])
		return dp[x][y];

	dp[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx <= 0 || yy <= 0 || xx > N || yy > N)
			continue;

		if (map[x][y] < map[xx][yy])
			dp[x][y] = max(dp[x][y], check(xx, yy) + 1);
	}

	return dp[x][y];
}
int main()
{
	scanf("%d", &N);

	memset(map, 0, sizeof(map));
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			scanf("%d", &map[i][j]);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (dp[i][j] == 0)
				max_cnt = max(max_cnt, check(i, j));
		}
	}
		
	cout << max_cnt << endl;
}