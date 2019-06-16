#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

using namespace std;

long long int dp[10001];
int N, B;
int main()
{
	cin >> N >> B;
	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		dp[i] = (dp[i] + dp[i - 1]) % 1000000007;
		if (i - B >= 0)
			dp[i] = (dp[i] + dp[i - B]) % 1000000007;
	}
	
	cout << dp[N] % 1000000007 << endl;
}