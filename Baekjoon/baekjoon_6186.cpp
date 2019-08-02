#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int R, C;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
char grass[101][101];
bool visited[101][101];
int cnt = 0;

void dfs(int x, int y)
{
	visited[x][y] = true;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx > 0 && yy > 0 && xx <= R && yy <= C)
		{
			if (grass[xx][yy] == '#' && !visited[xx][yy])
				dfs(xx, yy);
		}
	}
}
int main()
{
	cin >> R >> C;

	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
			cin >> grass[i][j];

	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
		{
			if (grass[i][j] == '#' && !visited[i][j])
			{
				dfs(i, j);
				cnt++;
			}
		}

	cout << cnt << endl;
}