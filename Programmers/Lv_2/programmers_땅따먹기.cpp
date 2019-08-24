#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[100001][4];

int solution(vector<vector<int> > land)
{
	int answer = 0;
	int size = land.size() - 1;

	for (int i = 0; i < 4; i++)
		dp[0][i] = land[0][i];

	for (int i = 1; i < land.size(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 0)
				dp[i][j] = max({ dp[i - 1][1], dp[i - 1][2], dp[i - 1][3] }) + land[i][j];
			else if(j == 1)
				dp[i][j] = max({ dp[i - 1][0], dp[i - 1][2], dp[i - 1][3] }) + land[i][j];
			else if(j == 2)
				dp[i][j] = max({ dp[i - 1][0], dp[i - 1][1], dp[i - 1][3] }) + land[i][j];
			else
				dp[i][j] = max({ dp[i - 1][0], dp[i - 1][1], dp[i - 1][2] }) + land[i][j];
		}
	}

	answer = max({ dp[size][0], dp[size][1], dp[size][2], dp[size][3] });

	return answer;
}