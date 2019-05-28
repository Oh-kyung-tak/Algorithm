#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <queue>
#include <functional>
#include <stack>

using namespace std;

int yang[101][101];
int map[101][101];
int dead[101][101];
int N, M, K;
deque<int> dq[1001];

int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { -1,0,1,-1,1,-1,0,1 };
int sum = 0;

int main()
{
	scanf("%d %d %d", &N, &M, &K);

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			map[i][j] = 5;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			scanf("%d", &yang[i][j]);

	for (int i = 1; i <= M; i++)
	{
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		dq[(x - 1) * N + y].push_back(z);
	}

	for (int i = 1; i <= N * N; i++)
		sort(dq[i].begin(), dq[i].end());

	while (K--)
	{
		// Spring
		for (int i = 1; i <= N * N; i++)
		{
			int size = dq[i].size();
			int x = (i / N);
			int y = (i % N);

			if (y == 0)
				y = N;
			else
				x += 1;

			for (int j = 0; j < size; j++)
			{
				int yang = dq[i].front();
				dq[i].pop_front();

				if (map[x][y] >= yang)
				{
					map[x][y] -= yang;
					dq[i].push_back(yang + 1);
				}
				else
					dead[x][y] += yang / 2;
			}
		}

		// Summer
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				map[i][j] += dead[i][j];
				dead[i][j] = 0;
			}
		}

		// Fall
		for (int i = 1; i <= N * N; i++)
		{
			int size = dq[i].size();
			int x = (i / N);
			int y = (i % N);

			if (y == 0)
				y = N;
			else
				x += 1;

			for (int j = 0; j < size; j++)
			{
				int yang = dq[i].front();
				dq[i].pop_front();

				if (yang % 5 == 0)
				{
					for (int k = 0; k < 8; k++)
					{
						int xx = x + dx[k];
						int yy = y + dy[k];

						if (xx >= 1 && yy >= 1 && xx <= N && yy <= N)
							dq[(xx - 1) * N + yy].push_front(1);
					}
				}

				dq[i].push_back(yang);
			}
		}

		// Winter
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				map[i][j] += yang[i][j];

	}

	for (int i = 1; i <= N * N; i++)
		sum += dq[i].size();

	printf("%d\n", sum);
}