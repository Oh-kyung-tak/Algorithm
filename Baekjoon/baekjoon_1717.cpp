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

int parent[1000001];
int N, M;

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

	for (int i = 0; i < M; i++)
	{
		int temp, a, b;
		scanf("%d %d %d", &temp, &a, &b);

		if (temp == 0)
			Union(a, b);
		else
		{
			int a_f = Find(a);
			int b_f = Find(b);

			if (a_f == b_f)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}