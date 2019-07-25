#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>

using namespace std;

int N;
int hanjo[30001];
int dp[30001];
int max_nn = -1;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> hanjo[i];

	for (int i = 1; i <= N; i++)
	{
		dp[i] = 0;
		for (int j = i + 1; j <= N; j++)
		{
			if (hanjo[i] < hanjo[j])
				break;
			else
				dp[i]++;
		}
		max_nn = max(max_nn, dp[i]);
	}

	cout << max_nn << endl;
}