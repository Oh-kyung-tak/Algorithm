#include <string>
#include <vector>

using namespace std;
bool visited[210];

void check(int n, vector<vector<int>> v)
{
	visited[n] = true;

	for (int i = 0; i < v[n].size(); i++)
	{
		int next = v[n][i];
		if (next == 1 && !visited[i])
			check(i, v);
	}
}

int solution(int n, vector<vector<int>> computers) {
	int answer = 0;

	for (int i = 0; i < n; i++)
	{
		if (!visited[i])
		{
			check(i, computers);
			answer++;
		}

	}
	return answer;
}