#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int weight[101][101];
int N, M;

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		weight[x][y] = 1;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (i == k || j == k)
					continue;

				if (weight[i][k] && weight[k][j])
					weight[i][j] = 1;
			}
		}
	}
	

	for (int i = 1; i <= N; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= N; j++)
		{
			if (!weight[i][j] && !weight[j][i])
				cnt++;
		}

		cout << cnt - 1 << endl;
	}
}