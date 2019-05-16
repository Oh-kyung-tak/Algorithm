#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
int dp[51];
int N;

int main()
{
	cin >> N;
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		dp[i] = 1;
		dp[i] += (dp[i - 1] % 1000000007 + dp[i - 2] % 1000000007) % 1000000007;
	}
	cout << dp[N] % 1000000007 << endl;
}