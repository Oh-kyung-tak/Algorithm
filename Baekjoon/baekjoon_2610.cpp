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
vector<int> v[101];
bool visited[101];
bool bfs_vis[101];

vector<int> temp;
vector<int> ans_v;

void check(int n)
{
	visited[n] = true;

	for (int i = 0; i < v[n].size(); i++)
	{
		int next = v[n][i];
		if (!visited[next])
		{
			check(next);
			temp.push_back(next);
		}	
	}
}

int check_bfs(int n)
{
	int cnt = 0;
	queue<int> q;
	q.push(n);
	bfs_vis[n] = true;

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int x = q.front();
			q.pop();

			for (int j = 0; j < v[x].size(); j++)
			{
				int next = v[x][j];
				if (!bfs_vis[next])
				{
					bfs_vis[next] = true;
					q.push(next);
				}
					
			}
		}
		cnt++;
	}
	return cnt;
}

int main()
{
	cin >> N >> M;
	
	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	for (int i = 1; i <= N; i++)
	{
		temp.clear();
		int x = 9999;
		int ans = -1;

		if (!visited[i])
		{
			temp.push_back(i);
			check(i);
		}

		
		for (int i = 0; i < temp.size(); i++)
		{
			memset(bfs_vis, 0, sizeof(bfs_vis));
			int t = check_bfs(temp[i]);

			if (x > t)
			{
				x = t;
				ans = temp[i];
			}
		}

		if (ans != -1)
			ans_v.push_back(ans);
	}
	
	sort(ans_v.begin(), ans_v.end());
	cout << ans_v.size() << endl;
	for (int i = 0; i < ans_v.size(); i++)
		cout << ans_v[i] << endl;
	
}