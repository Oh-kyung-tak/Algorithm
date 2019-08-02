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
bool visited[100001];
vector<pair<int,int>> v[100001];
int max_cnt = 0;
int far_cnt = 0;

void check(int n, int sum)
{
	visited[n] = true;
	
	cout << n << endl;
	if (max_cnt < sum)
	{
		max_cnt = sum;
		far_cnt = n;
	}

	for (int i = 0; i < v[n].size(); i++)
	{
		int next = v[n][i].first;

		if (!visited[next])
			check(next, sum + v[n][i].second);
	}
}

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N - 1; i++)
	{
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		v[x].push_back({ y,z });
		v[y].push_back({ x,z });
	}

	memset(visited, false, sizeof(visited));
	check(1, 0);
	memset(visited, false, sizeof(visited));
	max_cnt = 0;
	check(far_cnt, 0);

	printf("%d\n", max_cnt);
}