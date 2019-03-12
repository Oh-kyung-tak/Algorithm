#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

int map[251][251];
int visit[251][251];
int dx[8] = { -1,0,0,1,-1,-1,1,1 };
int dy[8] = { 0,1,-1,0,1,-1,1,-1 };
int n, m;
int cnt = 0;

void search(int x, int y)
{
	if (x <= 0 || y <= 0 || x > n || y > m)
		return;

	visit[x][y] = 1;

	for (int i = 0; i < 8; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (visit[xx][yy] == 0 && map[xx][yy] == 1)
			search(xx, yy);
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
			if (visit[i][j] == 0 && map[i][j] == 1)
			{
				search(i, j);
				cnt++;
			}
		}
	}

	printf("%d", cnt);
}
