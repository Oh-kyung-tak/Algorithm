#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>


using namespace std;

vector<pair<int, int>> v[101][101];
bool visited[101][101];
bool light_room[101][101];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };

int light = 0;
int N, M;

int check(int x, int y)
{
	int cnt = 0;

	queue<pair<int, int>> q;
	q.push({ x,y });

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int a = q.front().first;
			int b = q.front().second;
			q.pop();

			for (int i = 0; i < v[a][b].size(); i++)
			{
				int l_x = v[a][b][i].first;
				int l_y = v[a][b][i].second;

				light_room[l_x][l_y] = true;
			}

			for (int j = 0; j < 4; j++)
			{
				int xx = a + dx[j];
				int yy = b + dy[j];

				if(xx > 0 && yy > 0 && xx <= N && yy <= N)
					if (light_room[xx][yy] && !visited[xx][yy])
					{
						visited[xx][yy] = true;
						q.push({ xx,yy });
					}
			}
		}
	}

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			if (light_room[i][j])
				cnt++;

	return cnt;
}
int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		v[a][b].push_back({ c,d });
	}

	light_room[1][1] = true;
	while (1)
	{
		memset(visited, 0, sizeof(visited));
		int l_chk = check(1, 1);

		if (light != l_chk)
			light = l_chk;
		else
			break;
	}

	cout << light;
}