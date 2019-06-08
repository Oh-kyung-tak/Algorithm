#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

typedef struct _box {
	int x, y, z;
}box;

int map[101][101][101];
bool visited[101][101][101];
int M, N, H;
int dx[6] = { -1,0,0,1,0,0 };
int dy[6] = { 0,-1,1,0,0,0 };
int dz[6] = { 0,0,0,0,-1,1 };

queue<box> q;

int cnt = 0;
bool ck = true;

int main()
{
	cin >> M >> N >> H;

	for (int k = 1; k <= H; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				cin >> map[i][j][k];
				if (map[i][j][k] == 1)
					q.push({ i,j,k });
			}
		}
	}

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int x = q.front().x;
			int y = q.front().y;
			int z = q.front().z;
			q.pop();

			visited[x][y][z] = true;

			for (int j = 0; j < 6; j++)
			{
				int tx = x + dx[j];
				int ty = y + dy[j];
				int tz = z + dz[j];

				if (tx >= 1 && ty >= 1 && tz >= 1 && tx <= N && ty <= M && tz <= H)
				{
					if (!visited[tx][ty][tz] && map[tx][ty][tz] == 0)
					{
						visited[tx][ty][tz] = true;
						map[tx][ty][tz] = 1;
						q.push({ tx,ty,tz });
					}
				}
			}
		}
		cnt++;
	}

	for (int k = 1; k <= H; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				if(map[i][j][k] == 0)
				{
					ck = false;
					break;
				}
			}
		}
	}
	
	if (ck == false)
		cout << "-1" << endl;
	else
		cout << cnt - 1 << endl;
}