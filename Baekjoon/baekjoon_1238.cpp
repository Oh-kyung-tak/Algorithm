#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;
const int INF = 987654321;

int N, M, X;
vector<pair<int, int>> graph[1001]; //ne, cost;
int path_sum[1001];
int max_path = 0;

void dijkstra(int start, int vertex)
{
	vector<int> distance(vertex, INF);
	distance[start] = 0;

	priority_queue<pair<int, int>> pq;
	pq.push({ 0, start });

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int curVertex = pq.top().second;
		pq.pop();

		if (distance[curVertex] < cost)
			continue;
		
		int size = graph[curVertex].size();
		for (int i = 0; i < size; i++)
		{
			int ne = graph[curVertex][i].first;
			int ne_distance = cost + graph[curVertex][i].second;

			if (distance[ne] > ne_distance)
			{
				distance[ne] = ne_distance;
				pq.push({ -ne_distance, ne });
			}
		}
	}

	if (start == X)
	{
		for (int i = 1; i <= N; i++)
			path_sum[i] += distance[i];
	}
	else
		path_sum[start] += distance[X];
	
	
}

int main() 
{
	scanf("%d %d %d", &N, &M, &X);
	
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		graph[a].push_back({ b,c });
	}
	
	for (int i = 1; i <= N; i++)
		dijkstra(i, N + 1);

	for (int i = 1; i <= N; i++)
		max_path = max(max_path, path_sum[i]);

	printf("%d", max_path);
}