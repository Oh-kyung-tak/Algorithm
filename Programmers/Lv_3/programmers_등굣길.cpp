#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int dp[110][110];

int solution(int m, int n, vector<vector<int>> puddles) {
	int answer = 0;
	bool ck = true;

	for (int i = 0; i < puddles.size(); i++)
		dp[puddles[i][1]][puddles[i][0]] = -1;
	
	//ÃÊ±âÈ­
	for (int i = 1; i <= m; i++)
	{
		if (dp[1][i] == -1)
			ck = false;
		else
		{
			if (ck == false)
				dp[1][i] = -1;
			else
				dp[1][i] = 1;
		}
			
	}
	
	ck = true;

	for (int i = 1; i <= n; i++)
	{
		if (dp[i][1] == -1)
			ck = false;
		else
		{
			if (ck == false)
				dp[i][1] = -1;
			else
				dp[i][1] = 1;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= m; j++)
		{
			if (dp[i][j] == -1)
				continue;

			if (dp[i - 1][j] == -1 || dp[i][j - 1] == -1)
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) % 1000000007;
			else
				dp[i][j] = ((dp[i - 1][j] % 1000000007) + (dp[i][j - 1] % 1000000007) % 1000000007);
		}
	}

	answer = dp[n][m] % 1000000007;

	if (answer == -1)
		answer = 0;

	return answer;
}