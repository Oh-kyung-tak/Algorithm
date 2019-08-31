#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int dp[2510][2510];
int answer = 1;

int solution(string s)
{
	memset(dp, 0, sizeof(dp));

	for (int i = 0; i < s.size(); i++)
	{
		dp[i][i] = 1;
		for (int j = i - 1; j >= 0; j--)
		{
			if (i - j == 1)
			{
				if (s[j] == s[i])
					dp[j][i] = 2;
			}
			else
			{
				if (s[j] == s[i])
				{
					if (dp[j + 1][i - 1] == 0)
						dp[j][i] = 0;
					else
						dp[j][i] = dp[j + 1][i - 1] + 2;
				}
				else
					dp[j][i] = 0;
			}

			answer = max(dp[j][i], answer);
		}
	}

	return answer;
}