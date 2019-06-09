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
const int INF = 99999;

int N, M;
vector<pair<int, int>> v[20001];
vector<pair<int, int>> dist_store;

int min_num, min_dist;
int min_cnt = 1;

vector<int> check(int start, int vertex)
{
	vector<int> distance(vertex, INF);
	priority_queue<pair<int, int>> pq;

	pq.push({ 0,start });
	distance[start] = 0;
	
	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int curVertex = pq.top().second;
		pq.pop();

		if (distance[curVertex] < cost)
			continue;

		for (int i = 0; i < v[curVertex].size(); i++)
		{
			int ne = v[curVertex][i].first;
			int ne_dist = cost + v[curVertex][i].second;

			if (distance[ne] > ne_dist)
			{
				distance[ne] = ne_dist;
				pq.push({ -ne_dist, ne });
			}
		}
	}
	
	return distance;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back({ b,1 });
		v[b].push_back({ a,1 });
	}

	vector<int> distance = check(1, N + 1);

	for (int i = 1; i < distance.size(); i++)
		dist_store.push_back({ -distance[i], i });
	
	sort(dist_store.begin(), dist_store.end());

	for (int i = 0; i < dist_store.size(); i++)
	{
		if (i == 0)
		{
			min_num = dist_store[i].second;
			min_dist = -dist_store[i].first;
		}
		else
		{
			if (min_dist == -dist_store[i].first)
				min_cnt++;
			else
				break;
		}
		
	}

	cout << min_num << " " << min_dist << " " << min_cnt << endl;
}