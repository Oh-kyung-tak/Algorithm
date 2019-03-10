#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;

int map[51][51];
int N, M, K;
int visit[51][51];
int dx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int dy[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };

void dfs(int i, int j)
{
	visit[i][j] = 1;
	int x, y;
	if (i <= 0 || j <= 0 || i > M || j > N)
		return;

	for (int a = 0; a < 8; a++)
	{
		x = i + dx[a];
		y = j + dy[a];

		if (map[x][y] == 1 && visit[x][y] == 0)
		{
			dfs(x, y);
		}
	}
}

int main()
{
	
	while (1)
	{
		scanf("%d %d", &N, &M);
		memset(map, 0, sizeof(map));
		memset(visit, 0, sizeof(visit));
		int m_count = 0;
		
		if (N == 0 && M == 0)
			break;

		for (int i = 1; i <= M; i++)
			for (int j = 1; j <= N; j++)
				scanf("%d", &map[i][j]);

		for (int i = 1; i <= M; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (map[i][j] == 1 && visit[i][j] == 0)
				{
					dfs(i, j);
					m_count++;
				}

			}
		}
		printf("%d\n", m_count);
	}

}
