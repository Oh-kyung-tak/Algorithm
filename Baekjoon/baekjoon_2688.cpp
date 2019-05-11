#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

int T;

long long int dp[66][10];

int main() 
{
	scanf("%d", &T);
	
	while (T--)
	{
		int N;
		long long int sum = 0;
		memset(dp, 0, sizeof(dp));
		scanf("%d", &N);

		for (int i = 0; i < 10; i++)
			dp[1][i] = 1;

		for (int i = 2; i <= N; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				for (int k = j; k < 10; k++)
					dp[i][j] += dp[i - 1][k];
			}
		}

		for (int i = 0; i < 10; i++)
			sum += dp[N][i];

		printf("%lld\n", sum);
	}
}
