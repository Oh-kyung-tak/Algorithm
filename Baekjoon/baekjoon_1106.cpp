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
vector<pair<int, int>> v;
int C, N;
int dp[2001];
int min_sum = 99999999;
int main()
{
	cin >> C >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end());

	dp[0] = 0;

	for (int i = 1; i <= 2000; i++)
		dp[i] = 99999999;

	for (int i = 1; i <= 2000; i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (i - v[j].second >= 0)
				dp[i] = min(dp[i], dp[i - v[j].second] + v[j].first);
		}
	}

	for (int i = C; i <= 2000; i++)
		min_sum = min(min_sum, dp[i]);

	cout << min_sum << endl;
}