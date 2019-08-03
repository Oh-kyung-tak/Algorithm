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

int N, M;
vector<int> v[27];
bool visited[27];
bool ck = false;

void check(int x, int y)
{
	visited[x] = true;
	if (x == y)
	{
		ck = true;
		return;
	}

	for (int i = 0; i < v[x].size(); i++)
	{
		int next = v[x][i];
		if (!visited[next])
			check(next, y);
	}	
}
int main()
{
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++)
	{
		char a, b;
		scanf("%c is %c", &a, &b);
		getchar();

		v[a - 'a'].push_back(b - 'a');
	}

	scanf("%d", &M);
	getchar();

	for (int i = 0; i < M; i++)
	{
		memset(visited, 0, sizeof(visited));

		char a, b;
		ck = false;
		scanf("%c is %c", &a, &b);
		getchar();

		check(a - 'a', b - 'a');

		if (ck)
			printf("T\n");
		else
			printf("F\n");
	}
}