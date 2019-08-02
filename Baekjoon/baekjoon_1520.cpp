#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int N, M;
int road[501][501];
int dp[501][501];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };

int check_road(int x, int y)
{
	int &cnt = dp[x][y];

	if (cnt != -1)
		return cnt;

	if (x == N && y == M)
		return cnt = 1;

	cnt = 0;
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx > 0 && xx <= N && yy > 0 && yy <= M)
			if (road[x][y] > road[xx][yy])
				cnt += check_road(xx, yy);
	}
		
	return cnt;
}
int main()
{
	memset(dp, -1, sizeof(dp));

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> road[i][j];

	int ans = check_road(1, 1);
	
	cout << ans << endl;
}