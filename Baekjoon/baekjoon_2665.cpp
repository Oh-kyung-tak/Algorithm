#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

struct pos {
	int x;
	int y;
	int cnt;
};

bool map[51][51];
bool visited[51][51][101];
int darkroom[51][51];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int n;

void check()
{
	queue<pos> q;
	q.push({ 1,1,0 });
	visited[1][1][0] = true;

	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		int cnt = q.front().cnt;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx > 0 && yy > 0 && xx <= n && yy <= n && !visited[xx][yy][cnt])
			{
				if (darkroom[xx][yy] == 0 || darkroom[xx][yy] > cnt)
				{
					if (map[xx][yy] == 1)
					{
						visited[xx][yy][cnt] = true;
						darkroom[xx][yy] = cnt;
						q.push({ xx,yy,cnt });
					}
					else
					{
						visited[xx][yy][cnt + 1] = true;
						darkroom[xx][yy] = cnt + 1;
						q.push({ xx,yy, cnt + 1 });
					}
				}
			}
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%1d", &map[i][j]);

	check();

	for (int i = 0; i <= 101; i++)
	{
		if (visited[n][n][i])
		{
			printf("%d\n", i);
			break;
		}
	}
}