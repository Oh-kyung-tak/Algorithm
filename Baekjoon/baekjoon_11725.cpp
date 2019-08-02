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
vector<int> v[100001];
int parent[100001];

void check(int n)
{
	visited[n] = true;

	for (int i = 0; i < v[n].size(); i++)
	{
		int xx = v[n][i];

		if (!visited[xx])
		{
			parent[xx] = n;
			check(xx);
		}
	}
}

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N - 1; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		v[x].push_back(y);
		v[y].push_back(x);
	}

	check(1);

	for (int i = 2; i <= N; i++)
		printf("%d\n", parent[i]);
}