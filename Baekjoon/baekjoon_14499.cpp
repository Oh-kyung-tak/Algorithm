#include <iostream>

using namespace std;

int N, M, x, y, K;
int map[21][21];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int dice[7] = { 0,0,0,0,0,0,0 };

bool check(int x, int y)
{
	return x >= 0 && x < N && y >= 0 && y < M;
}

int main(void) 
{
	cin >> N >> M >> x >> y >> K;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];
		
	for (int i = 0; i < K; i++)
	{
		int temp;
		cin >> temp;
		temp--;

		int nx = x + dx[temp];
		int ny = y + dy[temp];

		if (!check(nx, ny))
			continue;

		int t_dice[7] = { 0, };

		if (temp == 0)
		{
			t_dice[3] = dice[1];
			t_dice[1] = dice[4];
			t_dice[4] = dice[6];
			t_dice[6] = dice[3];
			t_dice[2] = dice[2];
			t_dice[5] = dice[5];
		}
		if (temp == 1)
		{
			t_dice[1] = dice[3];
			t_dice[4] = dice[1];
			t_dice[6] = dice[4];
			t_dice[3] = dice[6];
			t_dice[2] = dice[2];
			t_dice[5] = dice[5];
		}
		if (temp == 2)
		{
			t_dice[1] = dice[5];
			t_dice[5] = dice[6];
			t_dice[6] = dice[2];
			t_dice[2] = dice[1];
			t_dice[3] = dice[3];
			t_dice[4] = dice[4];
		}
		if (temp == 3)
		{
			t_dice[5] = dice[1];
			t_dice[6] = dice[5];
			t_dice[2] = dice[6];
			t_dice[1] = dice[2];
			t_dice[3] = dice[3];
			t_dice[4] = dice[4];
		}

		if (map[nx][ny] == 0)
			map[nx][ny] = t_dice[6];
		else
		{
			t_dice[6] = map[nx][ny];
			map[nx][ny] = 0;
		}

		cout << t_dice[1] << endl;
		
		for (int i = 0; i < 7; i++)
			dice[i] = t_dice[i];

		x = nx;
		y = ny;
	}
}