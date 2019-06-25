#include <iostream>

using namespace std;

int Answer;
int dp[100001];

int dfs(int N)
{
	int temp;

	if (dp[N])
		return dp[N];
	else
	{
		if (N % 2 == 0)
			temp += dfs(N / 2) + 1;
		else
			temp += dfs(N + 1) + 1;
	}
}

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	dp[1] = 1;

	for (test_case = 0; test_case < T; test_case++)
	{

		int N1, N2;
		Answer = 0;

		for (int i = N1; i <= N2; i++)
		{
			int temp = dfs(i);
		}
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}