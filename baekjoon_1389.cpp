#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int N, M;
int visit[101];
int graph[101][101];
vector<pair<int,int>> v;

void bfs(int aa)
{
	int num = 0;
	int sum = 0;
	queue<int> q;
	visit[aa] = 1;

	q.push(aa);

	while (1)
	{
		if (q.empty())
			break;
		
		int length = q.size();
		
		for (int i = 0; i < length; i++)
		{
			int temp = q.front();
			q.pop();

			for (int j = 1; j <= N; j++)
			{
				if (graph[temp][j] == 1 && visit[j] == 0)
				{
					visit[j] = 1;
					q.push(j);
				}
			}
		}
		
		num++;
		sum += num * q.size();
	}
	v.push_back(make_pair(sum, aa));
}

int main() 
{
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= M; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	for (int i = 1; i <= N; i++)
	{
		memset(visit, 0, sizeof(visit));
		bfs(i);
	}

	sort(v.begin(), v.end());

	printf("%d", v[0].second);
}
