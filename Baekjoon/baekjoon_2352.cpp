#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int dp[40001];
int line[40001];

int N;
int cnt = 1;
int ans = 0;

int tmp;

int main()
{
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &line[i]);

	dp[1] = line[1];

	for (int i = 2; i <= N; i++)
	{
		if (dp[cnt] < line[i])
		{
			cnt++;
			dp[cnt] = line[i];
			continue;
		}
		tmp = lower_bound(dp + 1, dp + cnt + 1, line[i]) - dp;
		dp[tmp] = line[i];
	}

	ans = cnt;

	printf("%d", ans);

}

