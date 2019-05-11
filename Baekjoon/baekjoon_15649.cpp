#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<bool> visit;
vector<int> v;

void dfs()
{
	if (v.size() == M)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", v[i]);
		printf("\n");
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			v.push_back(i);
			dfs();
			visit[i] = false;
			v.pop_back();
		}
	}
}
int main() 
{
	cin >> N >> M;
	visit = vector<bool>(N + 1, false);

	dfs();
}
