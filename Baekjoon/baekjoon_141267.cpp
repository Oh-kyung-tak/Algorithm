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
vector<int> v[100001];
int holy[100001];

void dfs(int n, int s)
{
	holy[n] += s;
	s = holy[n];
	for (int i = 0; i < v[n].size(); i++)
	{
		int next = v[n][i];
		dfs(next, s);
	}
}
int main()
{
	cin >> N >> M;
	
	for (int i = 1; i <= N; i++)
	{
		int t;
		cin >> t;
		if(i != -1)
			v[t].push_back(i);
	}

	for (int i = 1; i <= M; i++)
	{
		int x, y;
		cin >> x >> y;
		holy[x] += y;
	}

	dfs(1,holy[1]);

	for (int i = 1; i <= N; i++)
		cout << holy[i] << " ";
}

