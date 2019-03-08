#include <stdio.h>
#include <map>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

char t_map[51][51];
int visit[51][51];
int R, C;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int cnt = 0;
int m_count = -1;

void check_map(int x, int y)
{
	queue<pair<int,int>> q;
	q.push(make_pair(x, y));
	visit[x][y] = 1;

	while (1)
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int xx = q.front().first;
			int yy = q.front().second;

			for (int j = 0; j < 4; j++)
			{
				int n_xx = xx + dx[j];
				int n_yy = yy + dy[j];

				if (n_xx > 0 && n_yy > 0 && n_xx <= R && n_yy <= C)
				{
					if (visit[n_xx][n_yy] == 0 && t_map[n_xx][n_yy] == 'L')
					{
						visit[n_xx][n_yy] = 1;
						q.push(make_pair(n_xx, n_yy));
					}
				}
			}
			q.pop();
		}

		if (q.empty())
			break;

		cnt++;
	}

	m_count = max(m_count, cnt);
}

int main() 
{
	scanf("%d %d", &R, &C);
	getchar();

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
			scanf("%c", &t_map[i][j]);

		getchar();
	}

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			memset(visit, 0, sizeof(visit));
			if (visit[i][j] == 0 && t_map[i][j] == 'L')
			{
				cnt = 0;
				check_map(i, j);
			}
		}
	}

	printf("%d", m_count);
}
