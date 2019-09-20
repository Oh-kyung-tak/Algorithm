#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <stack>

using namespace std;

int type = 0;
int N, M;
char grid[502][502];
int blind[5];

int main()
{
	cin >> N >> M;

	for (int i = 0; i < 5 * N + 1; i++)
		for (int j = 0; j < 5 * M + 1; j++)
			cin >> grid[i][j];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int x = 5 * i + 1;
			int y = 5 * j + 1;
			int cnt = 0;

			for (int k = 0; k < 4; k++)
			{
				if (grid[x + k][y] == '*')
					cnt++;
				else
					break;
			}

			blind[cnt]++;
		}
	}

	for (int i = 0; i < 5; i++)
		cout << blind[i] << " ";
}