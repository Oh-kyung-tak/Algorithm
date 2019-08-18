#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int T;
int V, E;
vector<int> v[20001];
int visited[20001];

void check(int i, int cnt)
{
	visited[i] = cnt;
	queue<pair<int,int>> q;
	q.push({ i, cnt });

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int current = q.front().first;
			int c_temp = q.front().second;
			q.pop();
			for (int j = 0; j < v[current].size(); j++)
			{
				int next = v[current][j];
				if (visited[next])
					continue;

				visited[next] = c_temp * -1;
				q.push({ next, c_temp * -1 });
			}
		}
	}
}
int main()
{
	scanf("%d", &T);

	while (T--)
	{
		memset(visited, 0, sizeof(visited));
		
		scanf("%d %d", &V, &E);
		
		bool ck = true;

		for (int i = 1; i <= V; i++)
			v[i].clear();

		for (int i = 0; i < E; i++)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			v[x].push_back(y);
			v[y].push_back(x);
		}

		for (int i = 1; i <= V; i++)
		{
			if (visited[i] == 0)
				check(i, 1);
		}

		for (int i = 1; i <= V; i++)
		{
			for (int j = 0; j < v[i].size(); j++)
			{
				if (visited[i] == visited[v[i][j]])
				{
					ck = false;
					break;
				}
			}
		}

		if (ck)
			printf("YES\n");
		else
			printf("NO\n");

	}
}