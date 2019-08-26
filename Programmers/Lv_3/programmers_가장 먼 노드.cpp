#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
bool visited[20001];
vector<int> v[20001];
int max_cnt = 0;
int answer = 0;

void check(int num)
{
	visited[num] = true;

	queue<int> q;
	q.push(1);

	while (!q.empty())
	{
		int size = q.size();
		answer = size;

		for (int i = 0; i < size; i++)
		{
			int x = q.front();
			q.pop();

			for (int j = 0; j < v[x].size(); j++)
			{
				if (!visited[v[x][j]])
				{
					q.push(v[x][j]);
					visited[v[x][j]] = true;
				}
			}
		}
	}
}

int solution(int n, vector<vector<int>> edge) {
	

	for (int i = 0; i < edge.size(); i++)
	{
		v[edge[i][1]].push_back(edge[i][0]);
		v[edge[i][0]].push_back(edge[i][1]);
	}

	check(1);



	return answer;
}