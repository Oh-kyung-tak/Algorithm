#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include<algorithm>

using namespace std;
int dp[100001][2];
int num[100001];
int N;
int max_sum = -1;

int main()
{
	memset(dp, 0, sizeof(dp));

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &num[i]);
	
	max_sum = num[1];
	dp[1][0] = num[1];
	dp[1][1] = num[1];

	for (int i = 2; i <= N; i++)
	{
		dp[i][0] = max(dp[i - 1][0] + num[i], num[i]);
		dp[i][1] = max({ dp[i - 1][1] + num[i], dp[i - 2][0] + num[i], num[i] });
		max_sum = max({ max_sum,dp[i][0], dp[i][1] });
		
	}
	
	printf("%d", max_sum);
}