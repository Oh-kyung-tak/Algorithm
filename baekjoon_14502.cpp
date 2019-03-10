#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;

int map[10][10];
int copy_map[10][10];
int N, M;
int m_count = -1;
int visit[10][10];
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };
vector<pair<int, int>> v;
vector<int> v_index;

void copy()
{
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			copy_map[i][j] = map[i][j];
}

void dfs(int i, int j)
{
	visit[i][j] = 1;
	int x, y;
	if (i <= 0 || j <= 0 || i > N || j > M)
		return;

	for (int a = 0; a < 4; a++)
	{
		x = i + dx[a];
		y = j + dy[a];
		
		if (copy_map[x][y] != 1 && visit[x][y] == 0)
		{
			copy_map[x][y] = 2;
			dfs(x, y);
			visit[x][y] = 1;
		}
	}
}

int main()
{
	
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			scanf("%d", &map[i][j]);
			if (map[i][j] == 0)
				v.push_back(make_pair(i, j));
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (i < 3)
			v_index.push_back(1);
		else
			v_index.push_back(0);
	}

	do
	{
		memset(visit, 0, sizeof(visit));

		// 맵 복사
		copy();

		int count = 0;

		//벽 3개 세우기
		for (int i = 0; i < v.size(); i++)
			if (v_index[i] == 1)
				copy_map[v[i].first][v[i].second] = 1;
			
		//바이러스 계산
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
				if (copy_map[i][j] == 2 && visit[i][j] == 0)
					dfs(i,j);
		}

		// 안전영역 계산
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
				if (copy_map[i][j] == 0)
					count++;
		}

		m_count = max(m_count, count);

	} while (prev_permutation(v_index.begin(), v_index.end()));

	printf("%d", m_count);
	
}
