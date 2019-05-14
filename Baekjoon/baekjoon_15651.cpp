#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <stack>
#include <math.h>

using namespace std;
vector<int> v;

int N, M;
void dfs(int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < v.size(); i++)
			printf("%d ", v[i]);
		printf("\n");
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (cnt < M)
		{
			v.push_back(i);
			dfs(cnt + 1);
			v.pop_back();
		}
	}
}
int main()
{
	cin >> N >> M;

	dfs(0);
}