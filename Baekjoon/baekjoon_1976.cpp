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

// Union-Find 기본
using namespace std;

int parent[201];
vector<int> v;
int N, M;
bool chk = true;

int Find(int x)
{
	if (x == parent[x])
		return x;
	else
	{
		int p = Find(parent[x]);
		parent[x] = p;
		return p;
	}
}
void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);

	if (x != y)
		parent[y] = x;
}

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
		parent[i] = i;

	for(int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
		{
			int temp;
			scanf("%d", &temp);
			if (temp == 1)
				Union(i, j);
		}

	for (int i = 0; i < M; i++)
	{
		int temp;
		scanf("%d", &temp);
		v.push_back(temp);
	}
	
	for (int i = 0; i < v.size() - 1; i++)
	{
		int a_f = Find(v[i]);
		int b_f = Find(v[i + 1]);

		if (a_f != b_f)
		{
			chk = false;
			break;
		}
	}

	if (chk)
		printf("YES\n");
	else
		printf("NO\n");
}