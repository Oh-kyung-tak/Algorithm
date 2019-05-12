#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int T;
int st[100001][2];
int dp[100001][2];

int main()
{
	cin >> T;
	while (T--)
	{
		int N;
		memset(st, sizeof(st), 0);
		memset(dp, sizeof(dp), 0);

		cin >> N;

		for (int i = 1; i <= N; i++)
			cin >> st[i][0];

		for (int i = 1; i <= N; i++)
			cin >> st[i][1];

		dp[1][0] = st[1][0];
		dp[1][1] = st[1][1];

		for (int i = 2; i <= N; i++)
		{
			dp[i][0] = max(dp[i - 1][1] + st[i][0], dp[i - 2][1] + st[i][0]);
			dp[i][1] = max(dp[i - 1][0] + st[i][1], dp[i - 2][0] + st[i][1]);
		}

		cout << max(dp[N][0], dp[N][1]) << endl;
	}
}

