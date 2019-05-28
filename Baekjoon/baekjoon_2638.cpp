#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
int l, h;
int map[101][101];
int visit[101][101];
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };

void check_air(int x, int y)
{
	map[x][y] = 2;
	visit[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < l && ny < h)
		{
			if (map[nx][ny] == 0 && visit[nx][ny] == 0)
			{
				visit[nx][ny] = 1;
				check_air(nx, ny);
			}
		}
	}
}

void check_cheese()
{
	for (int i = 0; i < l; i++)
		for (int j = 0; j < h; j++)
			if (map[i][j] == 1)
			{
				int cnt = 0;
				for (int k = 0; k < 4; k++)
				{
					int nx = i + dx[k];
					int ny = j + dy[k];

					if (map[nx][ny] == 2)
						cnt++;
				}

				if (cnt >= 2)
					map[i][j] = 0;
			}

	for (int i = 0; i < l; i++)
		for (int j = 0; j < h; j++)
			if (map[i][j] == 2)
				map[i][j] = 0;
}

int main()
{
	int count = 0;
	int last = 0;
	scanf("%d %d", &l, &h);

	for (int i = 0; i < l; i++)
		for (int j = 0; j < h; j++)
			scanf("%d", &map[i][j]);

	for (int i = 0; i < l; i++)
		for (int j = 0; j < h; j++)
		{
			if (map[i][j] == 1)
				last++;
		}

	while (1)
	{
		count++;
		memset(visit, 0, sizeof(visit));
		check_air(0, 0);
		check_cheese();
		int cheese = 0;

		for (int i = 0; i < l; i++)
			for (int j = 0; j < h; j++)
			{
				if (map[i][j] == 1)
					cheese++;
			}

		if (cheese == 0)
		{
			printf("%d\n", count);
			break;
		}
		else
			last = cheese;
	}

}