#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

char square[1001][1001];
int dp[1001][1001];
int N, M;
int ans = 0;

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			cin >> square[i][j];
			if (square[i][j] == '1')
				ans = 1;
		}
			

	for (int i = 1; i <= N; i++)
		dp[i][1] = square[i][1] - '0';
	
	for(int i = 1; i <= M; i++)
		dp[1][i] = square[1][i] - '0';

	for (int i = 2; i <= N; i++)
	{
		for (int j = 2; j <= M; j++)
		{
			if (square[i][j] == '0')
				dp[i][j] = 0;
			else
			{
				if (square[i - 1][j - 1] == '0')
					dp[i][j] = 1;
				else
					dp[i][j] = min({ dp[i - 1][j - 1] ,dp[i - 1][j], dp[i][j - 1] }) + 1;
			}
			ans = max(ans, dp[i][j]);
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
			cout << dp[i][j] << " ";

		cout << endl;
	}
	
	cout << ans * ans << endl;
}

