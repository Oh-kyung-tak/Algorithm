#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;

int cup[10002];
int dp[10002];
int m = -1;
int main()
{
	int N;
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++)
		scanf("%d", &cup[i]);

	dp[1] = cup[1];
	m = max(m, dp[1]);
	dp[2] = dp[1] + cup[2];
	m = max(m, dp[2]);
	for (int i = 3; i <= N; i++)
	{
		dp[i] = max(dp[i - 2] + cup[i], dp[i - 3] + cup[i - 1] + cup[i]);
		dp[i] = max(dp[i - 1], dp[i]);
		m = max(m, dp[i]);
	}

	printf("%d", m);

}
