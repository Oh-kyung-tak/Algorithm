#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

bool map[201][201];
bool visited[201][201][31];

int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };
int ddx[8] = { -2,-1,1,2,2,1,-1,-2 };
int ddy[8] = { -1,-2,-2,-1,1,2,2,1 };

int K;
int W, H;

int bfs(int a, int b)
{
	int cnt = 0;
	queue<pair<pair<int, int>, int>> q;

	visited[a][b][0] = 1;
	q.push({ {a,b},0 });

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int x = q.front().first.first;
			int y = q.front().first.second;
			int k_cnt = q.front().second;
			q.pop();

			if (x == H && y == W)
				return cnt;
			
			
			for (int j = 0; j < 4; j++)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];

				if (xx > 0 && yy > 0 && xx <= H && yy <= W)
				{
					if (!visited[xx][yy][k_cnt] && map[xx][yy] != 1)
					{
						visited[xx][yy][k_cnt] = 1;
						q.push({ {xx,yy},k_cnt });
					}
				}
			}

			if (k_cnt < K)
			{
				for (int j = 0; j < 8; j++)
				{
					int xx = x + ddx[j];
					int yy = y + ddy[j];

					if (xx > 0 && yy > 0 && xx <= H && yy <= W)
					{
						if (!visited[xx][yy][k_cnt + 1] && map[xx][yy] != 1)
						{
							visited[xx][yy][k_cnt + 1] = 1;
							q.push({ {xx,yy},k_cnt + 1 });
						}
					}
				}
			}
		}
		cnt++;
	}

	return -1;
}
int main()
{
	cin >> K;
	cin >> W >> H;

	for (int i = 1; i <= H; i++)
		for (int j = 1; j <= W; j++)
			cin >> map[i][j];

	int min_dis = bfs(1, 1);

	cout << min_dis << endl;
}