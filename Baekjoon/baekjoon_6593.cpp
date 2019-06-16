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

struct box {
	int z, x, y;
};
char map[31][31][31];
bool visited[31][31][31];
int dx[6] = { -1,0,0,1,0,0 };
int dy[6] = { 0,-1,1,0,0,0 };
int dz[6] = { 0,0,0,0,-1,1 };

int main()
{
	while (1)
	{
		int H, M, N;
		int e_m, e_n, e_h;
		cin >> H >> M >> N;

		if (M == 0 && N == 0 && H == 0)
			return 0;
		else
		{
			memset(map, '#', sizeof(map));
			memset(visited, false, sizeof(visited));
			int cnt = 0;
			bool ck = false;
			queue<box> q;

			for (int k = 1; k <= H; k++)
			{
				for (int i = 1; i <= M; i++)
				{
					for (int j = 1; j <= N; j++)
					{
						cin >> map[k][i][j];
						if (map[k][i][j] == 'S')
							q.push({ k,i,j });
						else if (map[k][i][j] == 'E')
						{
							e_h = k;
							e_m = i;
							e_n = j;
						}
					}
				}
				getchar();
			}

			while (!q.empty())
			{
				int size = q.size();

				for (int i = 0; i < size; i++)
				{
					int z = q.front().z;
					int x = q.front().x;
					int y = q.front().y;
					q.pop();

					visited[z][x][y] = true;

					for (int j = 0; j < 6; j++)
					{
						int tx = x + dx[j];
						int ty = y + dy[j];
						int tz = z + dz[j];

						if (tx >= 1 && ty >= 1 && tz >= 1 && tx <= M && ty <= N && tz <= H)
						{
							if (tz == e_h && tx == e_m && ty == e_n)
							{
								ck = true;
								break;
							}

							if (!visited[tz][tx][ty] && map[tz][tx][ty] == '.')
							{
								visited[tz][tx][ty] = true;
								q.push({ tz,tx,ty });
							}
						}
					}
				}

				if (ck == true)
					break;

				cnt++;
			}

			if (ck == false)
				cout << "Trapped!" << endl;
			else
				cout << "Escaped in " << cnt + 1 << " minute(s)." << endl;
		}
	}
}