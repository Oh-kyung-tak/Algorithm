#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>
const int INF = 1000000000;

using namespace std;

int road[405][405];
int N, M;
int ans = INF;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (i == j)continue;
			road[i][j] = INF;
		}
	}

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		road[a][b] = c;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (i == k || j == k)
					continue;

				if (road[i][j] > road[i][k] + road[k][j])
					road[i][j] = road[i][k] + road[k][j];
				
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)
				continue;

			if (road[i][j] != INF && road[j][i] != INF)
				ans = min(ans, road[i][j] + road[j][i]);
		}
	}

	if (ans == INF)
		cout << "-1" << endl;
	else
		cout << ans << endl;
}