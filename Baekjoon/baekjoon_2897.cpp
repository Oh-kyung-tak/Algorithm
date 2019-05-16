#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int car_cnt[5];
char map[51][51];
int N, M;

int main()
{
	scanf("%d %d", &N, &M);
	getchar();

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
			scanf("%c", &map[i][j]);

		getchar();
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < M; j++)
		{
			int cnt = 0;

			if (map[i][j] == '#' || map[i + 1][j] == '#' || map[i][j + 1] == '#' || map[i + 1][j + 1] == '#')
				continue;

			if (map[i][j] == 'X')
				cnt++;
			if (map[i + 1][j] == 'X')
				cnt++;
			if (map[i][j + 1] == 'X')
				cnt++;
			if (map[i + 1][j + 1] == 'X')
				cnt++;

			car_cnt[cnt]++;
		}
	}

	for (int i = 0; i < 5; i++)
		printf("%d\n", car_cnt[i]);
}