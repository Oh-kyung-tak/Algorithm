#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>

using namespace std;

char puyo[12][6];
bool visited[12][6];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };
int ans = 0;
vector<pair<int, int>> v;

void dfs(int x, int y)
{
	visited[x][y] = true;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 0 && yy >= 0 && xx < 12 && yy < 6)
		{
			if (puyo[x][y] == puyo[xx][yy] && !visited[xx][yy])
			{
				v.push_back({ xx, yy });
				dfs(xx, yy);
			}
		}
	}
}

void move()
{
	for (int i = 0; i < 6; i++)
	{
		vector<char> v;
		int cnt = 0;

		for (int j = 11; j >= 0; j--)
		{
			if (puyo[j][i] != '.')
			{
				v.push_back(puyo[j][i]);
				cnt++;
			}
		}
		
		for (int j = 0; j < 12 - cnt; j++)
			v.push_back('.');

		for (int j = 11; j >= 0; j--)
			puyo[j][i] = v[11 - j];
				
	}
}

void print()
{
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 6; j++)
			cout << puyo[i][j];

		cout << endl;
	}
}

int main()
{
	//초기값 입력
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 6; j++)
			cin >> puyo[i][j];


	while (true)
	{
		bool chk = false;
		memset(visited, false, sizeof(visited));

		//한 정점에서 연결된 개수 찾기
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				v.clear();
				if (!visited[i][j] && puyo[i][j] != '.')
				{
					v.push_back({ i,j });
					dfs(i, j);
				}
					
				if (v.size() >= 4)
				{
					for (int i = 0; i < v.size(); i++)
						puyo[v[i].first][v[i].second] = '.';

					chk = true;
				}
			}
		}

		//움직이기
		move();

		if (!chk)
			break;

		ans++;
	}

	cout << ans << endl;
}