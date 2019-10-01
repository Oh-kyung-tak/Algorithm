#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int C;
int N;
int num[501];
int dp[501];
int ans = 0;

int main()
{
	cin >> C;

	while (C--)
	{
		cin >> N;
		memset(num, 0, sizeof(num));
		memset(dp, 0, sizeof(dp));
		ans = 0;

		for (int i = 1; i <= N; i++)
			cin >> num[i];

		for (int i = 1; i <= N; i++)
		{
			dp[i] = 1;
			for (int j = 1; j < i; j++)
			{
				if (num[j] < num[i])
					dp[i] = max(dp[i], dp[j] + 1);
			}
			ans = max(ans, dp[i]);
		}

		cout << ans << endl;
	}
}