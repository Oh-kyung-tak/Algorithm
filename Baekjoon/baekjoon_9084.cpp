#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

int n;

int main()
{
	cin >> n;
	
	while (n--)
	{
		int num;
		int coin[21];
		int dp[10001];
		int money;

		cin >> num;

		for (int i = 0; i <= 10000; i++)
			dp[i] = 0;

		for (int i = 0; i < num; i++)
			cin >> coin[i];

		cin >> money;

		for (int i = 0; i < num; i++)
		{
			dp[coin[i]]++;
			for (int j = 0; j <= money; j++)
			{
				if (j - coin[i] > 0)
					dp[j] += dp[j - coin[i]];
			}
		}

		cout << dp[money] << endl;
	}
	
}