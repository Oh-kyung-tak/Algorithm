#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include<algorithm>

using namespace std;
int map[501][501];
bool visited[501][501];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int N, M;
int max_sum = -1;

void dfs(int x, int y, int cnt, int sum)
{
	
	if (cnt == 4)
	{
		max_sum = max(max_sum, sum);
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx > 0 && yy > 0 && xx <= N && yy <= M && !visited[xx][yy])
		{
			visited[xx][yy] = true;
			dfs(xx, yy, cnt + 1, sum + map[xx][yy]);
			visited[xx][yy] = false;
		}
	}
}

int main()
{
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			scanf("%d", &map[i][j]);

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			visited[i][j] = true;
			dfs(i, j, 1, map[i][j]);
			visited[i][j] = false;
		}
	
	// ㅜ모양
	for (int i = 1; i < N; i++)
	{
		for (int j = 2; j < M; j++)
		{
			int sum = map[i][j] + map[i][j - 1] + map[i][j + 1] + map[i + 1][j];
			max_sum = max(max_sum, sum);
		}
	}

	//ㅏ모양
	for (int i = 2; i < N; i++)
	{
		for (int j = 1; j < M; j++)
		{
			int sum = map[i][j] + map[i - 1][j] + map[i + 1][j] + map[i][j + 1];
			max_sum = max(max_sum, sum);
		}
	}
		
	//ㅓ모양
	for (int i = 2; i < N; i++)
	{
		for (int j = 2; j <= M; j++)
		{
			int sum = map[i][j] + map[i - 1][j] + map[i + 1][j] + map[i][j - 1];
			max_sum = max(max_sum, sum);
		}
	}

	//ㅗ모양
	for (int i = 2; i <= N; i++)
	{
		for (int j = 2; j < M; j++)
		{
			int sum = map[i][j] + map[i][j - 1] + map[i][j + 1] + map[i - 1][j];
			max_sum = max(max_sum, sum);
		}
	}

	cout << max_sum << endl;
}