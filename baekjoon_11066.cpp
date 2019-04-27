#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<stack>
#include<math.h>

using namespace std;

int dp[501][501];
int file[501];
int sum[501];

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		memset(dp, 0, sizeof(dp));
		memset(file, 0, sizeof(file));

		int n;
		
		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			cin >> file[i];
			sum[i] = sum[i - 1] + file[i];
		}
		
		for (int i = 2; i <= n; i++)
		{
			for (int j = i - 1; j > 0; j--)
			{
				dp[j][i] = 999999999;
				for (int k = j; k <= i; k++)
					dp[j][i] = min(dp[j][i], dp[j][k] + dp[k + 1][i]);

				dp[j][i] += sum[i] - sum[j - 1];
			}
		}

		cout << dp[1][n] << endl;
	}
}
