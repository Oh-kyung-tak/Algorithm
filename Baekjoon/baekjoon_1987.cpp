#include <stdio.h>
#include <map>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

char word_road[21][21];
int R, C;
int alpa[200];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int cnt = 1;
int m_count = 1;

void check_alpa(int x, int y)
{
	int idx = word_road[x][y];
	alpa[idx] = 1;

	for (int i = 0; i < 4; i++)
	{
		int d_x = x + dx[i];
		int d_y = y + dy[i];

		if (d_x > 0 && d_y > 0 && d_x <= R && d_y <= C)
		{
			int new_idx = word_road[d_x][d_y];

			if (alpa[new_idx] == 0)
			{
				cnt++;
				m_count = max(m_count, cnt);
				check_alpa(d_x, d_y);
			}
		}
	}
	alpa[idx] = 0;
	cnt--;
}

int main() 
{
	

	scanf("%d %d", &R, &C);
	getchar();
	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
			scanf("%c", &word_road[i][j]);

		getchar();
	}
		
	check_alpa(1,1);
	
	printf("%d", m_count);
}
