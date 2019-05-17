#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int N;
int people[201];
int dp[201];
int max_cnt = -1;

// LIS를 이용하여 최소 움직임 구하기
int main()
{
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &people[i]);

	for (int i = 1; i <= N; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (people[j] < people[i])
			{
				dp[i] = max(dp[i], dp[j] + 1);
				max_cnt = max(max_cnt, dp[i]);
			}
		}
	}
		
	printf("%d", N - max_cnt);

}