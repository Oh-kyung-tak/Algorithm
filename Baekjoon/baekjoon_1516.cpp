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

int degree[502];
int time[502];
int total_time[502];
queue<int> q;
vector<int> v[502];
int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> time[i];
		total_time[i] = time[i];

		while (1)
		{
			int temp;
			cin >> temp;

			if (temp == -1)
				break;

			degree[i]++;
			v[temp].push_back(i);

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
				total_time[v[i][j]] = max(total_time[v[i][j]], total_time[i] + time[v[i][j]]);
				if (degree[v[i][j]] == 0)
					q.push(v[i][j]);
			}
	}
	
	for (int i = 1; i <= N; i++)
		cout << total_time[i] << endl;
}