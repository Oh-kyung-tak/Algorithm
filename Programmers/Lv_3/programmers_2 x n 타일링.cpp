#include <string>
#include <vector>

using namespace std;

const int divide = 1000000007;
long long int dp[60001];

int solution(int n) {
	int answer = 0;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
		dp[i] = ((dp[i - 2] % divide) + (dp[i - 1] % divide)) % divide;

	answer = dp[n] % divide;

	return answer;
}