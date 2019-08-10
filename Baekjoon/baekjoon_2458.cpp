#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>


using namespace std;

int INF = 1000000;
int N, M;
int people[501][501];
int cnt = 0;

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			people[i][j] = INF;
	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		people[x][y] = 1;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (i == k || j == k)
					continue;

				if (people[i][j] > people[i][k] + people[k][j])
					people[i][j] = people[i][k] + people[k][j];
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		bool ck = true;

		for (int j = 1; j <= N; j++)
		{
			if (i == j)
				continue;

			if (people[i][j] == INF && people[j][i] == INF)
			{
				ck = false;
				break;
			}
		}

		if (ck)
			cnt++;
	}

	cout << cnt << endl;
}

