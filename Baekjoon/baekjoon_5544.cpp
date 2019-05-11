#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int score[101];
int rank_num[101];
vector<pair<int, int>>v;

int main(void)
{
	int N;

	scanf("%d", &N);

	for (int i = 0; i < (N * (N - 1) / 2); i++)
	{
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);

		if (c > d)
			score[a] += 3;
		else if (c < d)
			score[b] += 3;
		else if(c == d)
		{
			score[a] += 1;
			score[b] += 1;
		}
	}

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			if (score[i] < score[j])
				rank_num[i]++;

	for (int i = 1; i <= N; i++)
		printf("%d\n", rank_num[i] + 1);
}
