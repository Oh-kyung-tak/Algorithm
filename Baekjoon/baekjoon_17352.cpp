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

int N;
int root[300001];
int num[2];

int find(int x)
{
	if (root[x] == x) 
		return x;
	return 
		root[x] = find(root[x]);
}

void union_find(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y) 
		return;
	root[x] = y;
}

int main()
{
	int i;
	int a, b;

	scanf("%d", &N);
	for (i = 1; i <= N; i++) 
		root[i] = i;

	for (i = 0; i < N - 2; i++) 
	{
		scanf("%d %d", &a, &b);
		union_find(a, b);
	}

	int index = 0;

	for (i = 1; i <= N; i++) 
	{
		if (root[i] == i)
			num[index++] = i;
	}

	printf("%d %d", num[0], num[1]);

}