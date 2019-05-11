#include <iostream>

using namespace std;

int dp[101][1002];
int v[101];

int main() {
	int n, s, m; 
	scanf("%d %d %d", &n, &s, &m);

	for (int i = 1; i <= n; i++)
		scanf("%d", &v[i]);

	dp[0][s] = 1;

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <= m; j++) 
		{
			if (dp[i][j]) {
				if (j + v[i + 1] <= m) 
					dp[i + 1][j + v[i + 1]] = 1;
				if (j - v[i + 1] >= 0) 
					dp[i + 1][j - v[i + 1]] = 1;
			}
		}
	}

	int ans = -1;
	for (int i = 0; i <= m; i++) 
		if (dp[n][i]) 
			ans = i;
	
	printf("%d\n", ans);

	return 0;
}
