#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int N;
int dp[1001];
int num[1001];
int ans = -1;

int main()
{
	cin >> N;
	
	for (int i = 1; i <= N; i++)
		cin >> num[i];

	for (int i = 1; i <= N; i++)
	{
		dp[i] = num[i];
		for (int j = 1; j < i; j++)
		{
			if (num[j] > num[i])
				dp[i] = max(dp[i], dp[j] + num[i]);
		}
	}

	for (int i = 1; i <= N; i++)
		ans = max(ans, dp[i]);

	cout << ans << endl;
}