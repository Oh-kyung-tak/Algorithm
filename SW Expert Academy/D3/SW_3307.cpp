#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int num[1001];
int dp[1001];

int main()
{
	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(num, 0, sizeof(num));
		memset(dp, 0, sizeof(dp));

		int n;
		int max_cnt = -1;
		cin >> n;

		for (int i = 1; i <= n; i++)
			cin >> num[i];

		for (int i = 1; i <= n; i++)
			dp[i] = 1;

		for (int i = 2; i <= n; i++)
		{
			for (int j = 1; j < i; j++)
			{
				if (num[j] < num[i])
				{
					dp[i] = max(dp[i], dp[j] + 1);
					max_cnt = max(max_cnt, dp[i]);
				}
					
			}
		}

		cout << "#" << Test_case << " " << max_cnt << endl;

	}
}