#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int dp[70];
int N;

int main()
{
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= 67; i++)
		dp[i] = dp[i - 4] + dp[i - 3] + dp[i - 2] + dp[i - 1];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		cout << dp[t] << endl;
	}
}