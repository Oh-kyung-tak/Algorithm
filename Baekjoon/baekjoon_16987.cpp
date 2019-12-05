#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N;
int answer = 0;
int tmp_answer = 0;
vector<pair<int, int>> v;

void dfs(int idx)
{
	if (idx == N)
		return;

	for (int i = 0; i < v.size(); i++)
	{
		if (idx == i)
			continue;
		if (v[i].first <= 0)
			continue;
		if (v[idx].first <= 0)
			dfs(idx + 1);
		else
		{
			v[idx].first -= v[i].second;
			v[i].first -= v[idx].second;

			if (v[idx].first <= 0)
				tmp_answer++;
			if (v[i].first <= 0)
				tmp_answer++;
			answer = max(answer, tmp_answer);
			dfs(idx + 1);

			if (v[idx].first <= 0)
				tmp_answer--;
			if (v[i].first <= 0)
				tmp_answer--;
			v[idx].first += v[i].second;
			v[i].first += v[idx].second;
		}
	}
}

int main()
{	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}

	dfs(0);

	cout << answer << endl;
}