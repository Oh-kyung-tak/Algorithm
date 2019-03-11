#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int visit[101][101];
int map[101][101];

int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int N, M, K;
int cnt = 0;
int size = 0;
vector<int>v;

void search(int x, int y)
{
	visit[x][y] = 1;
	cnt++;
	
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 0 && yy >= 0 && xx < M && yy < N)
		{
			if(visit[xx][yy] == 0 && map[xx][yy] == 0)
				search(xx, yy);
		}
	}
}
int main() 
{
	scanf("%d %d %d", &N, &M, &K);
	for (int i = 0; i < K; i++)
	{
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for (int i = x1; i < x2; i++)
		{
			for (int j = y1; j < y2; j++)
				map[i][j] = 1;
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			if (visit[i][j] == 0 && map[i][j] == 0)
			{
				cnt = 0;
				search(i, j);
				v.push_back(cnt);
			}
	}

	sort(v.begin(), v.end());

	int size = v.size();

	printf("%d\n", v.size());

	for (int i = 0; i < size; i++)
		printf("%d ", v[i]);
}
