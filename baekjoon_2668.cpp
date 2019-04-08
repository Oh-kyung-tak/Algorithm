#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int visit[101] = { 0, };
int visitsample[101] = { 0, };
int number[101];
int finalnum = -1;
int cnt = 0;

void dfs(int startnum, int nodenum, vector<int> &v)
{
	visitsample[startnum] = 1;

	v.push_back(startnum);

	if (visitsample[nodenum] == 1)
	{
		finalnum = number[startnum];
		return;
	}

	dfs(nodenum, number[nodenum], v);
}
int main()
{
	int N;
	
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &number[i]);

	for (int i = 1; i <= N; i++)
	{
		memset(visitsample, 0, sizeof(visitsample));
		vector<int> v;
		if (visit[i] == 0)
		{
			dfs(i, number[i], v);

			if (finalnum == i)
			{
				for (int i = 0; i < v.size(); i++)
					visit[v[i]] = 1;
			}
		}
	}

	for (int i = 1; i <= N; i++)
		if (visit[i] == 1)
			cnt++;

	printf("%d\n", cnt);

	for (int i = 1; i <= N; i++)
		if (visit[i] == 1)
			printf("%d\n", i);
}
