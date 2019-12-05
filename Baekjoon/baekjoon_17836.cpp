#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <queue>

#define ERROR_NUM 99999999

using namespace std;

int N, M, T;
int map_array[101][101];
int visited[101][101];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };

void bfs()
{
	queue<pair<int, int>> q;

	int time_cnt = 0;
	int sword_x = -1, sword_y = -1, sword_time = -1;
	bool check = false;

	q.push({ 1,1 });
	visited[1][1] = true;

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			
			int x = q.front().first;
			int y = q.front().second;
			q.pop();

			if (x == N && y == M)
			{
				check = true;
				break;
			}
			
			for (int j = 0; j < 4; j++)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];

				if (xx > 0 && xx <= N && yy > 0 && yy <= M && map_array[xx][yy] != 1 && !visited[xx][yy])
				{
					if (map_array[xx][yy] == 2)
					{
						sword_x = xx;
						sword_y = yy;
						sword_time = time_cnt + 1;
					}
					visited[xx][yy] = true;
					q.push({ xx,yy });
				}
			}
		}

		if(!check)
			time_cnt++;
	}

	if (sword_time != -1)
	{
		sword_time += (N - sword_x);
		sword_time += (M - sword_y);
	}
	else
		sword_time = ERROR_NUM;

	if (!check)
		time_cnt = ERROR_NUM;

	int total_cnt = min(sword_time, time_cnt);

	if (total_cnt <= T)
		cout << total_cnt << endl;
	else
		cout << "Fail" << endl;

	return;
}

int main()
{	
	cin >> N >> M >> T;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> map_array[i][j];

	bfs();
}