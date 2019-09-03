#include <vector>
#include <queue>

using namespace std;
vector<vector<int>> v;
bool visited[110][110];

int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int answer = 0;
int n, m;

bool check(int a, int b)
{
	queue <pair<int, int>> q;
	visited[a][b] = true;
	q.push({ a,b });

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			
			if (x == n - 1 && y == m - 1)
			{
				answer += 1;
				return true;
			}

			for (int j = 0; j < 4; j++)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];

				if (xx >= 0 && yy >= 0 && xx < n && yy < m)
				{
					if (v[xx][yy] == 1 && !visited[xx][yy])
					{
						visited[xx][yy] = true;
						q.push({ xx,yy });
					}
				}
			}
		}

		answer += 1;
	}

	return false;
}
int solution(vector<vector<int>> maps)
{
	v = maps;
	n = maps.size();
	m = maps[0].size();

	if (check(0, 0))
		return answer;
	else
		return -1;
}