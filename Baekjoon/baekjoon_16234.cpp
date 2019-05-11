#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>

using namespace std;
int visit[51][51];
int map[51][51];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };
int sum = 0;
int cnt = 0;
int general = 0;

vector < pair<int, int>> v;

int N, L, R;

void search(int x, int y)
{
	visit[x][y] = 1;
	if (x <= 0 || y <= 0 || x > N || y > N)
		return;

	sum += map[x][y];
	v.push_back(make_pair(x, y));

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
	
		if (visit[xx][yy] == 0 && abs(map[xx][yy] - map[x][y]) >= L && abs(map[xx][yy] - map[x][y]) <= R)
		{
			visit[xx][yy] = 1;
			search(xx, yy);
		}
	}
}

int main()
{
	cin >> N >> L >> R;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			scanf("%d", &map[i][j]);
	}

	while (1)
	{
		memset(visit, 0, sizeof(visit));
		cnt = 0;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				sum = 0;
				int nn;

				if (visit[i][j] == 0)
				{
					search(i, j);
					cnt++;
				}

				if (v.size() > 1)
				{
					nn = sum / v.size();
					for (int i = 0; i < v.size(); i++)
						map[v[i].first][v[i].second] = nn;
				}
				v.clear();
			}
		}

		if (cnt == N * N)
		{
			cout << general << endl;
			break;
		}

		general++;
	}
	
		
	
	
}
