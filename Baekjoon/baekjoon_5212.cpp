#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
char world[12][12];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int min_x = 15, max_x = -1, min_y = 15, max_y = -1;
vector<pair<int, int>> v;

int main()
{
	cin >> N >> M;

	memset(world, '.', sizeof(world));

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> world[i][j];

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			int cnt = 0;
			for (int k = 0; k < 4; k++)
			{
				int xx = i + dx[k];
				int yy = j + dy[k];

				if (world[xx][yy] == '.')
					cnt++;
			}

			if (cnt >= 3)
				v.push_back({ i,j });
		}
	}

	for (int i = 0; i < v.size(); i++)
		world[v[i].first][v[i].second] = '.';

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			if (world[i][j] == 'X')
			{
				min_x = min(min_x, i);
				max_x = max(max_x, i);
				min_y = min(min_y, j);
				max_y = max(max_y, j);
			}
		}
	}

	for (int i = min_x; i <= max_x; i++)
	{
		for (int j = min_y; j <= max_y; j++)
			cout << world[i][j];

		cout << endl;
	}
	
}