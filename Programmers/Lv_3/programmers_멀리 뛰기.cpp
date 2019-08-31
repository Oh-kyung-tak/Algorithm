#include <string>
#include <vector>

using namespace std;

const long long int mod = 1234567;
long long int dp[2001];

long long solution(int n) {

	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
		dp[i] = ((dp[i - 1] % mod) + (dp[i - 2] % mod)) % mod;

	return dp[n];
}
