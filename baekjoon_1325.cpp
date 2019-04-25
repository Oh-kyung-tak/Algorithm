#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

vector<int> map[10001];
bool visit[10001];
vector<int> v;

int max_num = -1;
int N, M;
int cnt = 0;

void search(int current)
{
	cnt++;

	for (int i = 0; i < map[current].size(); i++)
	{
		int next = map[current][i];

		if (!visit[next])
		{
			visit[next] = true;
			search(next);
		}
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		map[y].push_back(x);
	}

	for (int i = 1; i <= N; i++)
	{
		memset(visit, false, sizeof(visit));
		cnt = 0;
		visit[i] = true;
		search(i);
		v.push_back(cnt);
		max_num = max(max_num, cnt);
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (max_num == v[i])
			printf("%d ", i + 1);
	}
}
