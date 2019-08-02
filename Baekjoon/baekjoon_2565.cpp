#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int N;
vector<pair<int, int>> rope;
int dp[501];
int ans = 0;
int rope_cnt = 0;
int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		rope.push_back({ a,b });
	}

	sort(rope.begin(), rope.end());

	for (int i = 0; i < rope.size(); i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (rope[j].second < rope[i].second)
				dp[i] = max(dp[i], dp[j] + 1);
		}
		ans = max(ans, dp[i]);
	}


	cout << N - ans << endl;
}