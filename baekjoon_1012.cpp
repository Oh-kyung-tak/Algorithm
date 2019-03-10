#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;

int map[51][51];
int N, M, K;
int visit[51][51];
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };

void dfs(int i, int j)
{
	map[i][j] = -1;
	visit[i][j] = 1;
	int x, y;
	if (i < 0 || j < 0 || i >= N || j >= M)
		return;

	for (int a = 0; a < 4; a++)
	{
		x = i + dx[a];
		y = j + dy[a];
		
		if (map[x][y] == 1 && visit[x][y] == 0)
		{
			map[x][y] = -1;
			dfs(x, y);
			visit[x][y] = 1;
		}
	}
}

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		memset(map, 0, sizeof(map));
		memset(visit, 0, sizeof(visit));
		int m_count = 0;
		scanf("%d %d %d", &M, &N, &K);

		for (int i = 0; i < K; i++)
		{
			int a, b;
			scanf("%d %d", &b, &a);
			map[a][b] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == 1 && visit[i][j] == 0)
				{
					m_count++;
					dfs(i, j);
				}
					
			}
		}
		printf("%d\n", m_count);
	}
	
}
