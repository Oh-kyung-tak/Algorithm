#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

char farm[251][251];
bool visited[251][251];
int N, M;
int c_sheep = 0, c_wolf = 0;
int sheep = 0, wolf = 0;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };

void dfs(int x, int y)
{
	visited[x][y] = true;

	if (farm[x][y] == 'v')
		c_wolf++;
	else if (farm[x][y] == 'k')
		c_sheep++;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx > 0 && yy > 0 && xx <= N && yy <= M && farm[xx][yy] != '#')
		{
			if (!visited[xx][yy])
				dfs(xx, yy);
		}
	}
}

int main()
{
	memset(visited, 0, sizeof(visited));
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			cin >> farm[i][j];
			if (farm[i][j] == 'v')
				wolf++;

			if (farm[i][j] == 'k')
				sheep++;
		}
			

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			if (farm[i][j] != '#' && !visited[i][j])
			{
				c_sheep = 0;
				c_wolf = 0;
				dfs(i, j);
				if (c_sheep > c_wolf)
					wolf -= c_wolf;
				else
					sheep -= c_sheep;
			}
		}
	}

	cout << sheep << " " << wolf << endl;
	return 0;
}