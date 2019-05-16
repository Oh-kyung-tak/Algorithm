#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

int num[500][1300];

int N, M;

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= 3 * M; j++)
			scanf("%d", &num[i][j]);
	}

	for (int i = 1; i <= N; i++)
	{
		int start = 1;
		for (int j = 1; j <= M; j++)
		{
			int sum = (2126 * num[i][start]) + (7152 * num[i][start + 1]) + (722 * num[i][start + 2]);
			if (sum >= 0 && sum < 510000)
				printf("#");
			else if (sum >= 51000 && sum < 1020000)
				printf("o");
			else if (sum >= 1020000 && sum < 1530000)
				printf("+");
			else if (sum >= 1530000 && sum < 2040000)
				printf("-");
			else
				printf(".");
			start += 3;
		}
		printf("\n");
	}
}