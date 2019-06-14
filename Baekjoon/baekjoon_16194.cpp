#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

int N;
int dp[1001];
int card[1001];

int main()
{
	cin >> N;

	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= N; i++)
		cin >> card[i];

	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j++)
		{
			if (j - i >= 0)
			{
				if (dp[j] == 0)
					dp[j] = dp[j - i] + card[i];
				else
					dp[j] = min(dp[j], dp[j - i] + card[i]);
			}
		}
	}

	cout << dp[N] << endl;
}