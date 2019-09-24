#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

bool visited[1001][1001];
bool m[1001][1001];

int N, M;
vector<pair<int, int>> queen;
vector<pair<int, int>> knight;

int q_dx[8] = { -1,0,0,1,1,1,-1,-1 };
int q_dy[8] = { 0,-1,1,0,1,-1,1,-1 };

int k_dx[8] = { -2,-2,-1,-1,2,2,1,1 };
int k_dy[8] = { 1,-1,2,-2,1,-1,2,-2 };

void move_queen(int x, int y)
{
	for (int i = 0; i < 8; i++)
	{
		int xx = x;
		int yy = y;

		while (1)
		{
			xx += q_dx[i];
			yy += q_dy[i];

			if (m[xx][yy] == 0 && xx > 0 && xx <= N && yy > 0 && yy <= M)
				visited[xx][yy] = 1;
			else
				break;
		}
	}
}

void move_knight(int x, int y)
{
	for (int i = 0; i < 8; i++)
	{
		int xx = x + k_dx[i];
		int yy = y + k_dy[i];
		
		if (xx > 0 && xx <= N && yy > 0 && yy <= M)
			visited[xx][yy] = 1;
	}
}

int check()
{
	int cnt = 0;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			if (!visited[i][j])
				cnt++;

	return cnt;
}

int main()
{
	cin >> N >> M;
	
	for (int i = 0; i < 3; i++)
	{
		int temp;
		cin >> temp;

		for (int j = 0; j < temp; j++)
		{
			int x, y;
			cin >> x >> y;
			if (i == 0)
				queen.push_back({ x,y });
			else if (i == 1)
				knight.push_back({ x,y });

			m[x][y] = 1;
			visited[x][y] = 1;
		}
	}

	for (int i = 0; i < queen.size(); i++)
		move_queen(queen[i].first, queen[i].second);

	for (int i = 0; i < knight.size(); i++)
		move_knight(knight[i].first, knight[i].second);

	cout << check() << endl;
}