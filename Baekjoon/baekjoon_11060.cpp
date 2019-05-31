#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
using namespace std;

// vector ÀÚ·áÇü ²Ä²ÄÈ÷ º¸±â
int N;
int jump[1001];
int dp[1111];

int main()
{
	for (int i = 0; i <= 1111; i++)
		dp[i] = 9999;

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &jump[i]);
	
	dp[1] = 1;

	for (int i = 1; i <= N; i++)
	{
		if (dp[i] != 9999)
		{
			for (int j = i + 1; j <= i + jump[i]; j++)
				dp[j] = min(dp[j], dp[i] + 1);
		}
	}

	if (dp[N] == 9999)
		printf("-1");
	else
		printf("%d", dp[N] - 1);
}