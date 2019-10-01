#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>

using namespace std;

int T;
int N;
int mm[101][101];
bool visited[101][101];

int main()
{
	cin >> T;
	while (T--)
	{
		memset(mm, 0, sizeof(mm));
		memset(visited, 0, sizeof(visited));
		queue<pair<int, int>> q;

		cin >> N;
		

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				cin >> mm[i][j];

		q.push({ 1,1 });
		visited[1][1] = true;

		while (!q.empty())
		{
			int x = q.front().first;
			int y = q.front().second;
			int num = mm[x][y];
			q.pop();

			if (x + num <= N && !visited[x + num][y])
			{
				q.push({ x + num , y });
				visited[x + num][y] = true;
			}

			if (y + num <= N && !visited[x][y + num])
			{
				q.push({ x, y + num });
				visited[x][y + num] = true;
			}
		}

		if (visited[N][N])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}