#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
char color[51][51];
int white[51];
int blue[51];
int red[51];
int dp[51][3];

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> color[i][j];

	for (int i = 1; i <= N; i++)
	{
		int w = 0, b = 0, r = 0;
		for (int j = 1; j <= M; j++)
		{
			if (color[i][j] == 'W')
			{
				b++; r++;
			}
			else if (color[i][j] == 'B')
			{
				w++; r++;
			}
			else
			{
				w++; b++;
			}
		}
		white[i] = w; blue[i] = b; red[i] = r;
	}

	dp[1][0] = white[1];
	dp[1][1] = 999999;
	dp[1][2] = 999999;

	for (int i = 2; i <= N; i++)
	{
		dp[i][0] = 999999;
		dp[i][1] = 999999;
		dp[i][2] = 999999;

		dp[i][0] = dp[i - 1][0] + white[i];

		if (dp[i - 1][1] > 999999)
			dp[i][1] = dp[i - 1][0] + blue[i];
		else
			dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + blue[i];

		if (dp[i - 1][2] > 999999)
			dp[i][2] = dp[i - 1][1] + red[i];
		else
			dp[i][2] = min(dp[i - 1][1], dp[i - 1][2]) + red[i];
	}

	cout << dp[N][2] << endl;
}

