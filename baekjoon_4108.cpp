#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;
char map[101][101];

int dx[8] = { -1,0 ,0,1,-1,1,-1,1 };
int dy[8] = { 0,-1,1,0,1,1,-1,-1 };
int main() 
{	
	while (1)
	{

		int N, M;
		
		scanf("%d %d", &N, &M);
		getchar();
		memset(map, '.', sizeof(map));

		if (N == 0 && M == 0)
			break;
		
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
				scanf("%c", &map[i][j]);
			getchar();
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == '.')
				{
					int count = 0;
					for (int k = 0; k < 8; k++)
					{
						int xx = i + dx[k];
						int yy = j + dy[k];

						if (map[xx][yy] == '*')
							count++;
					}
					map[i][j] = count + '0';
				}
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
				printf("%c", map[i][j]);

			printf("\n");
		}
	}
}
