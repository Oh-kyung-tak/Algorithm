#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

//DP를 이용한 문제
int dp[1010][1010][2];
int card[1010];

int N;

int check(int x, int y, int chk)
{
	if (dp[x][y][chk] != -1)
		return dp[x][y][chk];

	if (x >= y)
		if (!chk)
			return dp[x][y][chk] = card[x];
		else
			return dp[x][y][chk] = 0;

	if (!chk)
		return dp[x][y][chk] = max(check(x + 1, y, !chk) + card[x], check(x, y - 1, !chk) + card[y]);
	else
		return dp[x][y][chk] = min(check(x + 1, y, !chk), check(x, y - 1, !chk));
}
int main()
{
	cin >> N;

	while (N--)
	{
		int t;
		cin >> t;
		memset(dp, -1, sizeof(dp));

		for (int i = 1; i <= t; i++)
			cin >> card[i];

		cout << check(1, t, 0) << endl;
	}
}