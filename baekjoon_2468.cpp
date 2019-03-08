#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int N;
int maxrain = -999;
int map[101][101];
int tempmap[101][101];
int visit[101][101];
int maxcount = -999;
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };

void makemap(int rain)
{
	memset(tempmap, 0, sizeof(tempmap));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] <= rain)
				tempmap[i][j] = 0;
			else
				tempmap[i][j] = 1;
		}
	}
}

void check(int a, int b)
{
	if (a < 0 || b < 0 || a >= N || b >= N)
		return;

	visit[a][b] = 1;

	for (int i = 0; i < 4; i++)
	{
		int tx = a + dx[i];
		int ty = b + dy[i];

		if (visit[tx][ty] == 0 && tempmap[tx][ty] == 1)
			check(tx, ty);
	}
	
}
int main() 
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &map[i][j]);
			maxrain = max(maxrain, map[i][j]);
		}
	}

	for (int i = 0; i <= maxrain; i++)
	{
		int count = 0;
		makemap(i);
		memset(visit, 0, sizeof(visit));

		for (int a = 0; a < N; a++)
		{
			for (int b = 0; b < N; b++)
			{
				if (visit[a][b] == 0 && tempmap[a][b] == 1)
				{
					check(a, b);
					count++;
				}
			}
		}

		maxcount = max(maxcount, count);
	}

	printf("%d", maxcount);
}
