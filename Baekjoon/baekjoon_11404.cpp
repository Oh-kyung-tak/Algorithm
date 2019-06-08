#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

int N, M;
int graph[101][101];
int INF = 1000001;

void floyd()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (graph[j][i] == 0)
				continue;

			for (int k = 1; k <= N; k++)
			{
				if (graph[i][k] == 0 || j == k)
					continue;

				if (graph[j][k] == 0 || graph[j][k] > graph[j][i] + graph[i][k])
					graph[j][k] = graph[j][i] + graph[i][k];
			}
		}
	}
}
int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int start, end, c;
		cin >> start >> end >> c;

		if (!graph[start][end])
			graph[start][end] = c;
		else
			graph[start][end] = min(graph[start][end], c);
	}

	floyd();

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			cout << graph[i][j] << " ";

		cout << "\n";
	}
}