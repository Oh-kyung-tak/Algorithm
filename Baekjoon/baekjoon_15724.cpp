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

int N, M;
int K;

int sum = 0;
int people_cnt[1026][1026];

int main()
{
	scanf("%d %d", &N, &M);

	for(int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			int t;
			scanf("%d", &t);
			people_cnt[i][j] = people_cnt[i - 1][j] + people_cnt[i][j - 1] - people_cnt[i - 1][j - 1] + t;
		}

	scanf("%d", &K);

	for (int i = 0; i < K; i++)
	{
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		printf("%d\n", people_cnt[c][d] - people_cnt[c][b - 1] - people_cnt[a - 1][d] + people_cnt[a - 1][b - 1]);
	}
}