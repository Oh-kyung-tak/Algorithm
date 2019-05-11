#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

char map[255][255];
int visit[255][255];
int R, C;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int s_count = 0, w_count = 0;
int s_sum = 0; 
int w_sum = 0;

void check_map(int x_point, int y_point)
{
	visit[x_point][y_point] = 1;

	if (x_point <= 0 || y_point <= 0 || x_point > R || y_point > C)
		return;

	if (map[x_point][y_point] == 'o')
		s_count++;
	if (map[x_point][y_point] == 'v')
		w_count++;

	for (int i = 0; i < 4; i++)
	{
		int x = x_point + dx[i];
		int y = y_point + dy[i];

		if (map[x][y] != '#' && visit[x][y] == 0)
			check_map(x, y);
	}
}

int main(void)
{
	scanf("%d %d", &R, &C);
	getchar();

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
			scanf("%c", &map[i][j]);

		getchar();
	}

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			if (map[i][j] != '#' && visit[i][j] == 0)
			{
				s_count = 0; w_count = 0;
				check_map(i, j);
				if (w_count >= s_count)
					w_sum += w_count;
				else
					s_sum += s_count;
			}
		}
	}
		
	printf("%d %d", s_sum, w_sum);
	
}
