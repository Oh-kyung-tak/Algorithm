#include <iostream>
#include <algorithm>
#include <math.h>

int max_dp[1001];
int min_dp[1001];
int num[1001];

using namespace std;
int N;
int max_cnt = 0;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> num[i];

	max_dp[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		max_dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (num[j] < num[i])
				max_dp[i] = max(max_dp[j] + 1, max_dp[i]);
		}
	}
	
	min_dp[N] = 1;

	for (int i = N - 1; i >= 1; i--)
	{
		min_dp[i] = 1;
		for (int j = N; j > i; j--)
		{
			if (num[j] < num[i])
				min_dp[i] = max(min_dp[j] + 1, min_dp[i]);
		}
	}

	for (int i = 1; i <= N; i++)
		max_cnt = max(max_cnt, max_dp[i] + min_dp[i] - 1);
	

	cout << max_cnt << endl;
}
