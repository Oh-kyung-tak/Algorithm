#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

using namespace std;
int dp[10001];
int T;

int main()
{
	cin >> T;

	dp[0] = 1;
	for (int i = 1; i <= 3; i++) 
		for (int j = 1; j <= 10000; j++) 
			if (j - i >= 0)
				dp[j] += dp[j - i];
		
	while (T--)
	{
		int N;
		cin >> N;
		cout << dp[N] << endl;
	}
}