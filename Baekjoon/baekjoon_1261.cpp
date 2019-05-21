#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <queue>
#include <functional>

using namespace std;

int N, M;
bool visited[101][101];
char map[101][101];

int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };

//우선순위 큐와 BFS를 통한 문제 풀이
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

int main()
{
	scanf("%d %d", &N, &M);
	getchar();

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			scanf("%c", &map[i][j]);

		getchar();
	}

	pq.push({ 0, { 0,0 } });
	visited[0][0] = true;

	while (!pq.empty())
	{
		int x = pq.top().second.first;
		int y = pq.top().second.second;
		int block = pq.top().first;
		pq.pop();

		if (x == M - 1 && y == N - 1)
		{
			printf("%d", block);
			return 0;
		}
		
		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx >= 0 && yy >= 0 && xx < M && yy < N)
			{
				if (visited[xx][yy] == false)
				{
					if (map[xx][yy] == '1')
						pq.push({ block + 1, {xx, yy} });
					else
						pq.push({ block, {xx, yy} });

					visited[xx][yy] = true;
				}
			}
		}
	}
}