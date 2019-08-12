#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int people[12][12];
int N;
int score = 0;
bool visited[12];

void check(int n, int sc)
{
	if (n == 12)
		score = max(score, sc);
	

	for (int i = 1; i <= 11; i++)
	{
		if (people[n][i] != 0)
		{
			if (!visited[i])
			{
				int sum = sc + people[n][i];
				visited[i] = true;
				check(n + 1, sum);
				visited[i] = false;
			}
		}
	}
}

int main()
{
	scanf("%d", &N);

	while (N--)
	{
		memset(visited, 0, sizeof(visited));

		score = 0;

		for (int i = 1; i <= 11; i++)
		{
			for (int j = 1; j <= 11; j++)
				scanf("%d", &people[i][j]);
		}
			
		check(1, 0);

		printf("%d\n", score);
	}
}