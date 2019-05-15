#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<bool> visit;
vector<int> v;
vector<int> vv;

void dfs(int index)
{
	if (v.size() == M)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", v[i]);
		printf("\n");
		return;
	}

	for (int i = index; i <= N; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			v.push_back(vv[i - 1]);
			dfs(i);
			visit[i] = false;
			v.pop_back();
		}
	}
}
int main()
{
	cin >> N >> M;
	visit = vector<bool>(N + 1, false);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		vv.push_back(temp);
	}
	sort(vv.begin(), vv.end());

	dfs(1);
}