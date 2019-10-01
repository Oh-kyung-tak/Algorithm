#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>

#define MOD 1000000007
using namespace std;

long long int dp[101];
int C;

int main()
{
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= 100; i++)
		dp[i] = ((dp[i - 2] % MOD) + (dp[i - 1] % MOD)) % MOD;
	
	cin >> C;
	
	while (C--)
	{
		int num;
		cin >> num;
		cout << dp[num] % MOD << endl;
	}
}