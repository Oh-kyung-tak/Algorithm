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

int time[1001];
int degree[1001];
int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--)
	{
		int N, M, W;

		queue<int> q;
		vector<int> v[1001];
		int tt[1001];

		memset(tt, 0, sizeof(tt));

		cin >> N >> M;

		for (int i = 1; i <= N; i++)
		{
			cin >> time[i];
			tt[i] = time[i];
		}

		for (int i = 0; i < M; i++)
		{
			int A, B;
			cin >> A >> B;
			degree[B]++;
			v[A].push_back(B);
		}

		cin >> W;

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
					tt[v[i][j]] = max(tt[v[i][j]], tt[i] + time[v[i][j]]);
					if (degree[v[i][j]] == 0)
						q.push(v[i][j]);
				}

		}
		cout << tt[W] << endl;
	}

}