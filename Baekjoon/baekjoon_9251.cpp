#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

int N;
int dp[1001][1001];
string w1, w2;

//DP LCS(Longest Common Subsequnce) °³³ä!!
int main()
{
	cin >> w1 >> w2;

	w1 = '0' + w1;
	w2 = '0' + w2;
	
	int w1_len = w1.size();
	int w2_len = w2.size();

	for (int i = 0; i < w1_len; i++)
	{
		for (int j = 0; j < w2_len; j++)
		{
			if (i == 0 || j == 0)
			{
				dp[i][j] = 0;
				continue;
			}

			if (w1[i] == w2[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	cout << dp[w1_len - 1][w2_len - 1] << endl;
}