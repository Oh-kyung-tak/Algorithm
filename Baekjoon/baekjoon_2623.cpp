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

int degree[1002];
queue<int> q;
vector<int> v[1002];
vector<int> ans;
int N, M;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 1; i <= M; i++)
	{
		int nn;
		cin >> nn;
		vector<int> temp;
		for (int j = 1; j <= nn; j++)
		{
			int t;
			cin >> t;
			temp.push_back(t);
		}

		for (int j = 0; j < temp.size() - 1; j++)
		{
			degree[temp[j + 1]]++;
			v[temp[j]].push_back(temp[j + 1]);
		}
	}

	for (int i = 1; i <= N; i++)
		if (degree[i] == 0)
			q.push(i);


	while (!q.empty())
	{
		int i = q.front();
		q.pop();
		ans.push_back(i);
		for (int j = 0; j < v[i].size(); j++)
			if (degree[v[i][j]] > 0)
			{
				degree[v[i][j]]--;
				if (degree[v[i][j]] == 0)
					q.push(v[i][j]);
			}
	}

	if (ans.size() == N)
	{
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << endl;
	}
	else
		cout << "0" << endl;
}