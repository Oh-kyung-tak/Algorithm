#include <iostream>
#include <cstring>
#include <queue>

using namespace std;
int tomato[1001][1001];
int visit[1001][1001];
int M, N;
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
int daycount = 0;
int check_bool = 0;
queue<pair<int,int>> q;

void check_zero()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			if (tomato[i][j] == 0)
			{
				check_bool = 1;
				break;
			}
		}
	}
}

void check_day()
{
	while (1)
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int c_x = q.front().first;
			int c_y = q.front().second;

			for (int j = 0; j < 4; j++)
			{
				int x = c_x + dx[j];
				int y = c_y + dy[j];

				if (x > 0 && y > 0 && x <= N && y <= M)
				{
					if (tomato[x][y] == 0 && visit[x][y] == 0)
					{
						visit[x][y] = 1;
						tomato[x][y] = 1;
						q.push(make_pair(x, y));
					}
				}
			}
			q.pop();
		}
		if (q.empty())
			break;
		daycount++;
	}

	check_zero();
	
	if (check_bool == 0)
		printf("%d", daycount);
	else
		printf("-1");
}

int main(void)
{
	scanf("%d %d", &M, &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			scanf("%d", &tomato[i][j]);
			if (tomato[i][j] == 1)
			{
				visit[i][j] = 1;
				q.push(make_pair(i, j));
			}
		}
	}
		
	check_day();
}
