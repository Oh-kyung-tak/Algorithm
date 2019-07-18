#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int island[101][101];
bool visited[101][101];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };
queue<pair<int, int>> q;

int N;
int cnt = 1;
int is_cnt = 1;
int min_cnt = 999999;
int first_is;

void island_num(int x, int y)
{
	visited[x][y] = 1;
	island[x][y] = is_cnt;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx > 0 && yy > 0 && xx <= N && yy <= N)
		{
			if (!visited[xx][yy] && island[xx][yy] != 0)
				island_num(xx, yy);
		}
	}
}

int bfs(int x, int y)
{
	visited[x][y] = true;
	q.push({ x,y });

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int xx = q.front().first;
			int yy = q.front().second;
			q.pop();

			if (island[xx][yy] != 0 && island[xx][yy] != first_is)
				return cnt;

			for (int j = 0; j < 4; j++)
			{
				int xxx = xx + dx[j];
				int yyy = yy + dy[j];

				if (xxx > 0 && yyy > 0 && xxx <= N && yyy <= N)
				{
					if (!visited[xxx][yyy] && island[xxx][yyy] != first_is)
					{
						visited[xxx][yyy] = true;
						q.push({ xxx,yyy });
					}

				}
			}
		}
		cnt++;
	}
}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			cin >> island[i][j];

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			if (!visited[i][j] && island[i][j] != 0)
			{
				island_num(i, j);
				is_cnt++;
			}
	}

	for (int i = 1; i <= N; i++)
	{
		if (min_cnt == 1)
			break;
		else
		{
			for (int j = 1; j <= N; j++)
			{
				if (island[i][j] == 0)
				{
					set<int> s;
					set<int>::iterator iter;
					for (int k = 0; k < 4; k++)
					{
						int xx = i + dx[k];
						int yy = j + dy[k];

						if (xx > 0 && yy > 0 && xx <= N && yy <= N)
						{
							if (island[xx][yy] != 0)
								s.insert(island[xx][yy]);
						}

					}

					if (s.size() >= 1)
					{
						if (s.size() == 1)
						{
							memset(visited, false, sizeof(visited));
							cnt = 1;
							iter = s.begin();
							first_is = *iter;
							min_cnt = min(min_cnt, (bfs(i, j) - 1));
							while (!q.empty()) q.pop();
							int a = 4;
						}
						else
							min_cnt = 1;
					}
				}
			}
		}
	}

	cout << min_cnt << endl;
}