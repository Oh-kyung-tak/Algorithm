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

int dp[1001][1001];
int N, K;

int main()
{
	cin >> N >> K;

	dp[1][0] = 1;
	dp[1][1] = 1;

	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				dp[i][j] = 1;
			else
				dp[i][j] = ((dp[i - 1][j - 1] % 10007) + (dp[i - 1][j] % 10007)) % 10007;
		}
	}
		

	cout << dp[N][K] % 10007 << endl;
}

