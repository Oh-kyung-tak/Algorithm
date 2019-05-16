#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

bool map_pipe[18][18];
int N;
queue<pair<pair<int, int>, int>> q;
int cnt = 0;

int main()
{
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			scanf("%d", &map_pipe[i][j]);
	}

	q.push({ { 1,2 }, 0 });

	while (!q.empty())
	{
		int x = q.front().first.first;
		int y = q.front().first.second;
		int dir = q.front().second;
		q.pop();

		if (x == N && y == N)
		{
			cnt++;
			continue;
		}

		if (dir == 0)
		{
			int xx = x;
			int yy = y + 1;
			
			if (xx > 0 && yy > 0 && xx <= N && yy <= N)
			{
				if (map_pipe[xx][yy] != 1)
					q.push({ { xx, yy }, 0 });
			}

			xx = x + 1;
			yy = y + 1;

			if (xx > 0 && yy > 0 && xx <= N && yy <= N)
			{
				if (map_pipe[xx][yy] != 1 && map_pipe[x+1][y] != 1 && map_pipe[x][y+1] != 1)
					q.push({ { xx, yy }, 2 });
			}
		}
		else if (dir == 1)
		{
			int xx = x + 1;
			int yy = y;

			if (xx > 0 && yy > 0 && xx <= N && yy <= N)
			{
				if (map_pipe[xx][yy] != 1)
					q.push({ { xx, yy }, 1 });
			}

			xx = x + 1;
			yy = y + 1;

			if (xx > 0 && yy > 0 && xx <= N && yy <= N)
			{
				if (map_pipe[xx][yy] != 1 && map_pipe[x + 1][y] != 1 && map_pipe[x][y + 1] != 1)
					q.push({ { xx, yy }, 2 });
			}
		}
		else
		{
			int xx = x;
			int yy = y + 1;

			if (xx > 0 && yy > 0 && xx <= N && yy <= N)
			{
				if (map_pipe[xx][yy] != 1)
					q.push({ { xx, yy }, 0 });
			}

			xx = x + 1;
			yy = y;

			if (xx > 0 && yy > 0 && xx <= N && yy <= N)
			{
				if (map_pipe[xx][yy] != 1)
					q.push({ { xx, yy }, 1 });
			}

			xx = x + 1;
			yy = y + 1;

			if (xx > 0 && yy > 0 && xx <= N && yy <= N)
			{
				if (map_pipe[xx][yy] != 1 && map_pipe[x + 1][y] != 1 && map_pipe[x][y + 1] != 1)
					q.push({ { xx, yy }, 2 });
			}
		}
	}

	cout << cnt << endl;
}