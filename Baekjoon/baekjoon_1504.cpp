#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

// Dijkstra 기본 알고리즘
// c++ 입출력 시간 단축 조심
// 최소값 INF 잡아주는것 조심
const int INF = 3 * 800 * 1000 + 1;

int V, E;
int K;
int A, B;

vector<pair<int, int>> graph[801]; // ne, cost;

vector<int> dijkstra(int start, int vertex)
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

		for (int i = 0; i < graph[curVertex].size(); i++)
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
	return distance;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> V >> E;

	for (int i = 0; i < E; i++)
	{
		int s, d, c;
		cin >> s >> d >> c;
		graph[s].push_back({ d,c });
		graph[d].push_back({ s,c });
	}

	cin >> A >> B;

	vector<int> result1 = dijkstra(1, V + 1);
	vector<int> result2 = dijkstra(A, V + 1);
	vector<int> result3 = dijkstra(B, V + 1);

	int de = min(result1[A] + result2[B] + result3[V], result1[B] + result3[A] + result2[V]);

	printf("%d\n", (de >= 3 * 800 * 1000 + 1) ? -1 : de);
}