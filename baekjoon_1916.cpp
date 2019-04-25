#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int inf = 0xfffffff;
vector<vector<int>> W;

void dijkstra(int start, int end) {

	vector<bool> visited(n + 1, false);
	vector<int> dist(n + 1, inf);

	for (int i = 1; i <= n; i++)
		dist[i] = W[start][i];

	int cnt = n;
	int vnear = start; 
	visited[start] = true;

	while (cnt--) {

		int min_dist = inf;
		for (int i = 1; i <= n; i++) 
		{
			if (!visited[i] && min_dist>dist[i]) 
			{
				vnear = i;
				min_dist = dist[i];
			}
		}

		for (int i = 1; i <= n; i++) 
		{
			if (visited[i] || W[vnear][i] == inf)
				continue;

			if (dist[vnear] + W[vnear][i]<dist[i])
				dist[i] = dist[vnear] + W[vnear][i];
		}
		visited[vnear] = true;
	}

	cout << dist[end] << endl;
}
int main() {

	cin >> n >> m;
	W = vector<vector<int>>(n + 1, vector<int>(n + 1, inf));

	int start, end, cost;
	for (int i = 0; i<m; i++) {
		scanf("%d %d %d", &start, &end, &cost);
		W[start][end] = min(W[start][end], cost);
	}

	scanf("%d %d", &start, &end);
	dijkstra(start, end);

	return 0;
}
