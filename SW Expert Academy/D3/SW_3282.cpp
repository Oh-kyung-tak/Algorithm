#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int dp[101][1001];

int main()
{

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(dp, 0, sizeof(dp));

		int N, K;
		cin >> N >> K;

		for (int i = 1; i <= N; i++)
		{
			int v, c;
			cin >> v >> c;

			for (int j = 1; j <= K; j++)
			{
				if (j - v >= 0)
					dp[i][j] = max({ c, dp[i - 1][j - v] + c, dp[i - 1][j] });
				else
					dp[i][j] = dp[i - 1][j];
			}
		}

		cout << "#" << Test_case << " " << dp[N][K] << endl;
	}
}