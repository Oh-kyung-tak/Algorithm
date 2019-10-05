#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>
#include <map>

using namespace std;

int N;
vector<pair<int, int>> v(505);
int dp[505][505];

int main()
{
	for (int i = 1; i < 505; i++)
	{
		for (int j = 1; j < 505; j++)
		{
			if (i == j)
				dp[i][j] = 0;
			else
				dp[i][j] = 999999999;
		}
	}

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int x, y;
		cin >> x >> y;
		v[i].first = x;
		v[i].second = y;
	}
	
	//1 ~ 4 => [1 ~ 1, 2 ~ 4], [1 ~ 2, 3 ~ 4], [1 ~ 3, 4 ~ 4]  
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j <= N - i; j++)
		{
			int end = j + i;
			for (int k = 1; k < end; k++)
				dp[j][end] = min(dp[j][end], dp[j][k] + dp[k + 1][end] + v[j].first * v[k].second * v[end].second);
		}
	}

	cout << dp[1][N] << endl;
}