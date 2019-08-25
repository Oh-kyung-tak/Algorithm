#include <string>
#include <vector>

using namespace std;

long long int dp[81];

long long solution(int N) {
	long long answer = 0;
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= N; i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	answer = (dp[N] * 2) + ((dp[N] + dp[N - 1]) * 2);
	return answer;
}