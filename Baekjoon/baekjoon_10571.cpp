#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int dp[301];
int N;

int main()
{
	cin >> N;
	
	while (N--)
	{
		memset(dp, 0, sizeof(dp));

		vector<pair<double, double>> v;
		int temp;
		int ans = 0;

		cin >> temp;
		
		for (int i = 0; i < temp; i++)
		{
			double x, y;
			cin >> x >> y;
			v.push_back({ x,y });
		}
		
		dp[0] = 1;

		for (int i = 1; i < v.size(); i++)
		{
			dp[i] = 1;
			for (int j = 0; j < i; j++)
			{
				if (v[j].first < v[i].first && v[j].second > v[i].second)
					dp[i] = max(dp[i], dp[j] + 1);
			}
		}

		for (int i = 0; i < temp; i++)
			ans = max(ans, dp[i]);

		cout << ans << endl;
	}

}

