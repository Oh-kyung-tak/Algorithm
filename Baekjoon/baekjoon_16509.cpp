#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
bool visited[10][10];

queue<pair<int, int>> q;

int p_x, p_y;
int k_x, k_y;
int cnt = 0;

int main()
{
	scanf("%d %d", &p_x, &p_y);
	scanf("%d %d", &k_x, &k_y);
	memset(visited, false, sizeof(visited));

	q.push({ p_x, p_y });
	visited[p_x][p_y] = true;

	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			int x = q.front().first;
			int y = q.front().second;

			if (x == k_x && y == k_y)
			{
				cout << cnt << endl;
				return 0;
			}

			if (x != k_x || y + 1 != k_y)
			{
				if (x - 1 != k_x || y + 2 != k_y)
				{
					int xx = x - 2;
					int yy = y + 3;

					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}	
				}
				if (x + 1 != k_x || y + 2 != k_y)
				{
					int xx = x + 2;
					int yy = y + 3;
					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}
				}
			}

			if (x != k_x || y - 1 != k_y)
			{
				if (x - 1 != k_x || y - 2 != k_y)
				{
					int xx = x - 2;
					int yy = y - 3;
					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}
				}
				if (x + 1 != k_x || y - 2 != k_y)
				{
					int xx = x + 2;
					int yy = y - 3;
					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}
				}
			}

			if (x - 1 != k_x || y != k_y)
			{
				if (x - 2 != k_x || y + 1 != k_y)
				{
					int xx = x - 3;
					int yy = y + 2;
					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}
				}
				if (x - 2 != k_x || y - 1 != k_y)
				{
					int xx = x - 3;
					int yy = y - 2;
					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}
				}
			}

			if (x + 1 != k_x || y != k_y)
			{
				if (x + 2 != k_x || y + 1 != k_y)
				{
					int xx = x + 3;
					int yy = y + 2;
					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}
				}
				if (x + 2 != k_x || y - 1 != k_y)
				{
					int xx = x + 3;
					int yy = y - 2;
					if (xx >= 0 && yy >= 0 && xx <= 9 && yy <= 8)
					{
						if (visited[xx][yy] == false)
						{
							visited[xx][yy] = true;
							q.push({ xx,yy });
						}
					}
				}
			}
			q.pop();
		}
		cnt++;
	}

	cout << "-1" << endl;
}