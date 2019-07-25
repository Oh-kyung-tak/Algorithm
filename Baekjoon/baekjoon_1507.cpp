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

int road[21][21];
int a[21][21];
bool c[21][21];

int N;
int ans = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
		{
			cin >> road[i][j];
			a[i][j] = road[i][j];
		}


	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (i == k || j == k)
					continue;

				if (road[i][j] > road[i][k] + road[k][j])
				{
					cout << "-1" << endl;
					return 0;
				}

				if (road[i][j] == road[i][k] + road[k][j])
					a[i][j] = 0;
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (a[i][j] != 0 && !c[i][j])
			{
				ans += a[i][j];

				c[i][j] = true;
				c[j][i] = true;
			}
		}
	}

	cout << ans << endl;
}