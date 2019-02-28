#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

queue <pair<int, int>> q;
char map_c[101][101]; 
int visit[101][101];
int dx[4] = { -1, -1, 1, 1 };
int dy[4] = { -1, 1, -1, 1 };
int N, R, C;

int main()
{
	memset(map_c, '.', sizeof(map_c));
	scanf("%d %d %d", &N, &R, &C);
	q.push(make_pair(R, C));
	

	while (1)
	{
		if (q.empty())
			break;

		int size = q.size();
		
		for (int i = 0; i < size; i++)
		{
			int x = q.front().first;
			int y = q.front().second;
			
			q.pop();

			for (int j = 0; j < 4; j++)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];

				if (xx > 0 && yy > 0 && xx <= N && yy <= N)
				{
					if (visit[xx][yy] != 1)
					{
						visit[xx][yy] = 1;
						map_c[xx][yy] = 'v';
						q.push(make_pair(xx, yy));
					}
				}
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			printf("%c", map_c[i][j]);
	
		printf("\n");
	}
}
