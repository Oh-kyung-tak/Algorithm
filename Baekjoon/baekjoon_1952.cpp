#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int N, M;
bool visited[101][101];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int x = 1, y = 1;
int dir = 0;
int cnt = 0;

int main()
{
	cin >> N >> M;

	while (1)
	{
		if (visited[x][y])
			break;

		visited[x][y] = 1;

		int xx = x + dx[dir];
		int yy = y + dy[dir];

		if (visited[xx][yy] || xx < 1 || xx > N || yy < 1 || yy > M)
		{
			dir++;
			if (dir == 4)
				dir = 0;
			xx = x + dx[dir];
			yy = y + dy[dir];
			cnt++;
		}

		x = xx;
		y = yy;
	}

	cout << cnt - 1 << endl;
}