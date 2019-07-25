#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>

// 위상정렬 연습
using namespace std;

int degree[10001];
int time[10001];
int max_time[10001];
queue<int> q;
vector<int> v[10001];

int ans = 0;
int N, M;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int job_cnt;
		cin >> time[i];
		max_time[i] = time[i];
		cin >> job_cnt;

		for (int j = 0; j < job_cnt; j++)
		{
			int job;
			cin >> job;
			degree[i]++;
			v[job].push_back(i);
		}
	}

	for (int i = 1; i <= N; i++)
		if (degree[i] == 0)
			q.push(i);

	while (!q.empty())
	{
		int i = q.front();
		q.pop();
		for (int j = 0; j < v[i].size(); j++)
			if (degree[v[i][j]] > 0)
			{
				degree[v[i][j]]--;
				max_time[v[i][j]] = max(max_time[v[i][j]], max_time[i] + time[v[i][j]]);
				if (degree[v[i][j]] == 0)
					q.push(v[i][j]);
			}
	}
	
	for (int i = 1; i <= N; i++)
		ans = max(ans, max_time[i]);

	cout << ans << endl;
}