#include <vector> 
#include <cstring>
#include <iostream>

using namespace std;

int MOD = 20170805;

int r[501][501];
int b[501][501];

int solution(int m, int n, vector<vector<int>> city_map) {
	memset(r, 0, sizeof r);
	memset(b, 0, sizeof b);

	r[1][1] = b[1][1] = 1;

	for (int i = 1; i <= m;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			if (city_map[i - 1][j - 1] == 0)
			{
				r[i][j] = (r[i][j] + r[i][j - 1] + b[i - 1][j]) % MOD;
				b[i][j] = (b[i][j] + r[i][j - 1] + b[i - 1][j]) % MOD;
			}
			else if (city_map[i - 1][j - 1] == 1)
			{
				r[i][j] = 0;
				b[i][j] = 0;
			}
			else
			{
				r[i][j] = r[i][j - 1];
				b[i][j] = b[i - 1][j];
			}
		}
	}

	return (r[m][n - 1] + b[m - 1][n]) % MOD;
}