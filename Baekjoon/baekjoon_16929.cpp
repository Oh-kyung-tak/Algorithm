#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int N, M;

char map[51][51];
bool visited[51][51];
int dx[4] = { 0,-1,1,0 };
int dy[4] = { -1,0,0,1 };
bool ck = false;

void check_map(int x, int y, int dir, int cnt, int a_x, int a_y)
{
	if (ck == true)
		return;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 0 && xx < N && yy >= 0 && yy < M)
		{
			if (!visited[xx][yy])
			{
				if (map[x][y] == map[xx][yy])
				{
					visited[xx][yy] = true;
					if (i == dir)
						check_map(xx, yy, dir, cnt, a_x, a_y);
					else
						check_map(xx, yy, i, cnt + 1, a_x, a_y);
				}
			}
			else
			{
				if (xx == a_x && yy == a_y && cnt >= 4)
				{
					ck = true;
					return;
				}
			}
		}
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> map[i][j];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				memset(visited, false, sizeof(visited));
				visited[i][j] = true;
				check_map(i, j, k, 1, i, j);
				if (ck == true)
				{
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;
}

