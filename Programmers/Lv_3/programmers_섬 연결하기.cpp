#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <string.h>

using namespace std;

vector<pair<int, int>> v[101];
int visited[101];

int check(int n)
{
	int sum = 0;
	priority_queue<pair<int, int> > pq;

	for (int i = 0; i < v[n].size(); i++)
		pq.push({ -v[n][i].second, v[n][i].first });
	
	visited[0] = 1;

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int next = pq.top().second;

		pq.pop();

		if (!visited[next])
		{
			visited[next] = 1;
			sum += cost;

			for (int i = 0; i < v[next].size(); i++)
				pq.push({ -v[next][i].second, v[next][i].first });
		}
	}

	return sum;
}
int solution(int n, vector<vector<int>> costs) {
	int answer = 0;

	memset(visited, false, sizeof(visited));

	for (int i = 0; i < costs.size(); i++)
	{
		v[costs[i][0]].push_back({ costs[i][1], costs[i][2] });
		v[costs[i][1]].push_back({ costs[i][0], costs[i][2] });
	}

	answer = check(0);
	return answer;
}