#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int dp[11][11];
int T;

int main()
{
	cin >> T;
	
	dp[1][1] = 1;
	dp[2][1] = 1;
	dp[2][2] = 1;

	for (int i = 3; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}

	for (int k = 1; k <= T; k++)
	{
		int N;
		cin >> N;

		cout << "#" << k << endl;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= i; j++)
				cout << dp[i][j] << " ";

			cout << endl;
		}
	}
}