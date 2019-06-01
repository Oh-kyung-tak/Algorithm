#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int dp[10000] = { 0 };
int aa[10000];
vector<int> v[10000];

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		scanf("%d", &aa[i]);

	dp[1] = 1;
	v[1].push_back(aa[1]);

	for (int i = 2; i <= num; i++)
	{
		dp[i] = 1;
		v[i].push_back(aa[i]);
		for (int j = 1; j < i; j++)
		{
			if (aa[i] > aa[j])
			{
				dp[i] = max(dp[j] + 1, dp[i]);
				if (dp[j] + 1 >= dp[i])
				{
					v[i].clear();
					for (int k = 0; k < v[j].size(); k++)
						v[i].push_back(v[j][k]);

					v[i].push_back(aa[i]);
				}
			}
				
		}
	}
	sort(dp, dp + num + 1);
	
	printf("%d\n", dp[num]);
	for (int i = 1; i <= num; i++)
	{
		if (v[i].size() == dp[num])
		{
			for (int j = 0; j < v[i].size(); j++)
				printf("%d ", v[i][j]);
			
			printf("\n");
			break;
		}
	}
	return 0;
}