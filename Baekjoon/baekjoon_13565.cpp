#include <iostream>
#include <deque>
#include <string>
#include <vector>

using namespace std;

char map[1001][1001];
int visit[1001][1001];
int N, M;
int inner = 1;
int outter;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };

void check_map(int x_point, int y_point)
{
	visit[x_point][y_point] = 1;
	map[x_point][y_point] = '2';

	if (x_point <= 0 || y_point <= 0 || x_point > N || y_point > M)
		return;

	for (int i = 0; i < 4; i++)
	{
		int x = x_point + dx[i];
		int y = y_point + dy[i];

		if (map[x][y] == '0' && visit[x][y] == 0)
			check_map(x, y);
	}
}

int main()
{

	scanf("%d %d", &N, &M);
	getchar();

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
			scanf("%c", &map[i][j]);

		getchar();
	}
	
	for (int i = 1; i <= M; i++)
	{
		if (visit[inner][i] == 0 && map[inner][i] == '0')
			check_map(inner, i);
	}

	outter = N;

	for (int i = 1; i <= M; i++)
	{
		if (map[outter][i] == '2')
		{
			printf("YES");
			return 0;
		}
	}

	printf("NO");
}
