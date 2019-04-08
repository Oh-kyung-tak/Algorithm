#include <iostream>
#include <string.h>

using namespace std;

int T;
char map[101][101];
int visitmap[101][101];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int H, W;

void search(int x, int y)
{
	visitmap[x][y] = 1;

	if (x <= 0 || y <= 0 || x > H || y > W)
		return;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (visitmap[xx][yy] == 0 && map[xx][yy] == '#')
			search(xx, yy);
	}

}
int main() 
{
	scanf("%d", &T);

	while (T--)
	{
		memset(map, '.', sizeof(map));
		memset(visitmap, 0, sizeof(visitmap));

		int cnt = 0;
		scanf("%d %d", &H, &W);
		
		getchar();

		for (int i = 1; i <= H; i++)
		{
			for (int j = 1; j <= W; j++)
				scanf("%c", &map[i][j]);

			getchar();
		}

		for (int i = 1; i <= H; i++)
		{
			for (int j = 1; j <= W; j++)
			{
				if (map[i][j] == '#' && visitmap[i][j] == 0)
				{
					search(i,j);
					cnt++;
				}
					
			}
		}
		printf("%d\n", cnt);
	}
}
