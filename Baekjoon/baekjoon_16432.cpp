#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;
int day_d[1001];
vector<int> v[1001];
bool visited[1001][10];
bool ck = false;

bool dfs(int n)
{
	if (n == N + 1)
	{
		for (int i = 1; i <= N; i++)
			cout << day_d[i] << endl;

		ck = true;
		return 0;
	}

	for (int i = 0; i < v[n].size(); i++)
	{
		if (v[n][i] != day_d[n - 1] && !visited[n][v[n][i]])
		{
			day_d[n] = v[n][i];
			visited[n][v[n][i]] = true;
			dfs(n + 1);

			if (ck == true)
				return 0;
		}
	}
}

int main()
{
	day_d[0] = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int t;
		cin >> t;

		for (int j = 0; j < t; j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	dfs(1);

	if (!ck)
		cout << "-1" << endl;
}

