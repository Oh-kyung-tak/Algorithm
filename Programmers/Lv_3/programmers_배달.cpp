#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool visited[52][52];

vector<pair<int, int>> v[52];

vector<int> check(int start, int V)
{
	vector<int> dist(V + 1, 9876543);
	dist[start] = 0;

	priority_queue<pair<int, int>> pq;

	pq.push({ 0, start });

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int cur = pq.top().second;

		pq.pop();

		if (dist[cur] < cost)
			continue;

		for (int i = 0; i < v[cur].size(); i++)
		{
			int next = v[cur][i].first;
			int ne_cost = cost + v[cur][i].second;

			if (dist[next] > ne_cost)
			{
				dist[next] = ne_cost;
				pq.push({ -ne_cost, next });
			}
		}
	}

	return dist;
}

int solution(int N, vector<vector<int> > road, int K) {
	int answer = 0;

	sort(road.begin(), road.end());

	// road √ ±‚»≠
	for (int i = 0; i < road.size(); i++)
	{
		int x = road[i][0];
		int y = road[i][1];
		int cost = road[i][2];

		if (!visited[x][y])
		{
			v[x].push_back({ y, cost });
			v[y].push_back({ x, cost });
			visited[x][y] = true;
		}
	}

	vector<int> ans = check(1, N);

	for (int i = 1; i < ans.size(); i++)
	{
		if (ans[i] <= K)
			answer++;
	}

	return answer;
}