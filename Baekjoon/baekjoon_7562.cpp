#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int map[305][305];
int N;
int l;
int a, b;
int x, y;
int c;
int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };

void check_horse(int xx, int yy)
{
	queue<pair<int, int>> q;

	q.push(make_pair(xx, yy));
	map[xx][yy] = 1;

	while (1)
	{
		int size = q.size();
		
		for (int i = 0; i < size; i++)
		{	
			int x_point = q.front().first;
			int y_point = q.front().second;
			
			q.pop();
			if (x_point == x && y_point == y)
			{
				printf("%d\n", c);
				return;
			}
			for (int j = 0; j < 8; j++)
			{
				int mx = x_point + dx[j];
				int my = y_point + dy[j];

				if (mx >= 0 && my >= 0 && mx < l && my < l)
				{
					if (map[mx][my] == 0)
					{
						q.push(make_pair(mx, my));
						map[mx][my] = 1;
					}
				}
			}
		}
		c++;
	}
}

int main(void) 
{
	scanf("%d", &N);

	while (N--)
	{
		memset(map, 0, sizeof(map));
		c = 0;
		scanf("%d", &l);
		scanf("%d %d", &a, &b);
		scanf("%d %d", &x, &y);
		check_horse(a, b);
	}
	
}
