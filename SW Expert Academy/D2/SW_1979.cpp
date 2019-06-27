#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int N, M;
int sum = 0;
bool map[32][32];

void check(int x, int y)
{
	int cnt = 0;
	for (int i = x; i <= N; i++)
	{
		if (!map[i][y])
			break;
		else
			cnt++;
	}

	if (cnt == M && !map[x - 1][y])
		sum++;

	cnt = 0;

	for (int i = y; i <= N; i++)
	{
		if (!map[x][i])
			break;
		else
			cnt++;
	}

	if (cnt == M && !map[x][y - 1])
		sum++;
}

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		memset(map, 0, sizeof(map));
		sum = 0;

		cin >> N >> M;

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				cin >> map[i][j];

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (map[i][j])
					check(i, j);
			}
		}

		cout << "#" << k << " " << sum << endl;
	}
}