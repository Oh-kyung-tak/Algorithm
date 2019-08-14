#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int N, K;
int history[501][501];
int S;
int INF = 1000000;
int main()
{
	scanf("%d %d", &N, &K);
	
	for (int i = 1; i <= N; i++)
	for (int j = 1; j <= N; j++)
		history[i][j] = INF;

	for (int i = 0; i < K; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		history[x][y] = 1;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (i == k || j == k)
					continue;

				if (history[i][j] > history[i][k] + history[k][j])
					history[i][j] = history[i][k] + history[k][j];
			}
		}
	}

	scanf("%d", &S);

	for (int i = 0; i < S; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (history[a][b] == INF && history[b][a] == INF)
			printf("0\n");
		else
		{
			if (history[a][b] != INF)
				printf("-1\n");
			else
				printf("1\n");
		}
	}
	
}