#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int visitmap[501][501];
int map[501][501];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int n, m;
int picture = 0;
int maxcnt = 0;
int cnt = 0;

void mapsearch(int x, int y)
{
	visitmap[x][y] = 1;

	if (map[x][y] == 1)
		cnt++;

	if (x <= 0 || y <= 0 || x > n || x > m)
		return;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (map[xx][yy] == 1 && visitmap[xx][yy] == 0)
			mapsearch(xx, yy);
	}
}
int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			scanf("%d", &map[i][j]);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cnt = 0;
			if (map[i][j] == 1 && visitmap[i][j] == 0)
			{
				mapsearch(i, j);
				picture++;
				maxcnt = max(maxcnt, cnt);
			}
		}
	}

	printf("%d\n%d", picture, maxcnt);
}
	

	
