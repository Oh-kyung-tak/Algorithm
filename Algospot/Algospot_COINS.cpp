#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int T;
int M, C;
int coin[101];
long long int dp[5002];

int main()
{
	cin >> T;
	
	while (T--)
	{
		cin >> M >> C;
		memset(dp, 0, sizeof(dp));
		memset(dp, 0, sizeof(coin));

		for (int i = 0; i < C; i++)
			cin >> coin[i];

		for (int i = 0; i < C; i++)
		{
			dp[coin[i]]++;

			for (int j = coin[i] + 1; j <= M; j++)
				dp[j] = (dp[j] + dp[j - coin[i]]) % 1000000007;
			
		}

		cout << dp[M] << endl;
	}
}