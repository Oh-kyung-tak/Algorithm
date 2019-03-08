#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int N, M;
int map[301][301];
int visit[301][301];
int year = 0;
int check = 0;
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };

int checkmap()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (map[i][j] != -1)
				return 0;
		}
	}
	return 1;
}
void printmap()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%d  ", map[i][j]);

		printf("\n");
	}
}

void makemap()
{
	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 1; j < M - 1; j++)
		{
			if (map[i][j] != -1)
			{
				for (int a = 0; a < 4; a++)
				{
					int tx = i + dx[a];
					int ty = j + dy[a];

					if (map[tx][ty] == -1 && map[i][j] > 0)
						map[i][j]--;
				}
			}
		}
	}

	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 1; j < M - 1; j++)
		{
			if (map[i][j] == 0)
				map[i][j] = -1;
		}
	}
}

void visitmap(int aa, int bb)
{
	visit[aa][bb] = 1;
	if (aa < 0 || bb < 0 || aa >= N || bb >= M)
		return;

	for (int i = 0; i < 4; i++)
	{
		int xx = aa + dx[i];
		int yy = bb + dy[i];

		if (visit[xx][yy] == 0 && map[xx][yy] != -1)
			visitmap(xx, yy);
	}
}

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &map[i][j]);
			if (map[i][j] == 0)
				map[i][j] = -1;
		}
	}

	while (checkmap() != 1)
	{
		memset(visit, 0, sizeof(visit));
		int count = 0;
		makemap();
		
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (visit[i][j] == 0 && map[i][j] != -1)
				{
					visitmap(i, j);
					count++;
				}
			}
		}
		year++;

		if (count >= 2)
		{
			printf("%d", year);
			check = 1;
			break;
		}
	}

	if(check == 0)
		printf("0");
}
