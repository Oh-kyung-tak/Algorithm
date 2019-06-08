#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

vector<pair<int, int>> v[10001];
bool visited[10001];

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int N, M;
int cost_sum = 0;

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
		v[b].push_back({ a,c });
	}

	pq.push({ 0,1 });


	while (!pq.empty())
	{
		int cost = pq.top().first;
		int vertex = pq.top().second;
		pq.pop();

		if (!visited[vertex])
		{
			visited[vertex] = true;
			cost_sum += cost;

			for (int i = 0; i < v[vertex].size(); i++)
			{
				int nextCost = v[vertex][i].second;
				int nextVertex = v[vertex][i].first;

				if (!visited[nextVertex])
					pq.push({ nextCost, nextVertex });
			}
		}
	}

	cout << cost_sum << endl;
}