#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>

using namespace std;

int N, M;
char people[101][101];
bool visited[101][101];
int B_sum = 0;
int W_sum = 0;
int cnt = 1;

int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };

void bfs(int x, int y)
{
	visited[x][y] = true;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx > 0 && yy > 0 && xx <= M && yy <= N)
		{
			if (!visited[xx][yy] && people[x][y] == people[xx][yy])
			{
				cnt++;
				bfs(xx, yy);
			}
		}
	}
}
int main()
{
	cin >> N >> M;
	
	for (int i = 1; i <= M; i++)
		for (int j = 1; j <= N; j++)
			cin >> people[i][j];

	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (!visited[i][j])
			{
				cnt = 1;
				bfs(i, j);

				if (people[i][j] == 'W')
					W_sum += pow(cnt, 2);
				else
					B_sum += pow(cnt, 2);
			}
		}
	}

	cout << W_sum << " " << B_sum << endl;
}