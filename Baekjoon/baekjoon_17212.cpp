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

int dp[100001];
int coin[4] = { 1,2,5,7 };
int num;

int main()
{
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= 100000; i++)
	{
		dp[i] = 9999999999;
		for (int j = 0; j < 4; j++)
		{
			if (i - coin[j] < 0)
				continue;
			else
				dp[i] = min(dp[i], dp[i - coin[j]] + 1);
			
		}
	}

	cin >> num;
	cout << dp[num] << endl;
}