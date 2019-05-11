#include<iostream>
#include<algorithm>

using namespace std;

int card[1005];
int dp[1005];
int maxnum = 1;

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		scanf("%d", &card[i]);

	dp[1] = 1;

	for (int i = 2; i <= num; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (card[i] > card[j])
				dp[i] = max(dp[j] + 1, dp[i]);
		}
		maxnum = max(maxnum, dp[i]);
	}

	printf("%d", maxnum);
}
	

	
