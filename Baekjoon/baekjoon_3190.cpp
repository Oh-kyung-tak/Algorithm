#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int N, K, L;
bool apple[101][101];
bool snake[101][101];
char dir[10001];

int dx[4] = {0,1,0,-1 };
int dy[4] = {1,0,-1,0 };
int direction = 0;
int time = 0;

deque<pair<int, int>> dq;

int main()
{
	cin >> N >> K;
	
	memset(dir, 'x', sizeof(dir));

	for (int i = 0; i < K; i++)
	{
		int x, y;
		cin >> x >> y;
		apple[x][y] = 1;
	}
	
	cin >> L;

	for (int i = 0; i < L; i++)
	{
		int x;
		char c;
		cin >> x >> c;
		dir[x] = c;
	}
	
	dq.push_back({ 1,1 });
	snake[1][1] = true;

	while (true)
	{
		time++; 

		int t_x = dq.front().first + dx[direction];
		int t_y = dq.front().second + dy[direction];

		dq.push_front({ t_x, t_y });

		// º®¿¡ ºÎµúÇûÀ» ¶§
		if (t_x < 1 || t_y < 1 || t_x > N || t_y > N)
			break;

		// ¸öÀÌ Á¸ÀçÇÒ ¶§
		if (snake[t_x][t_y])
			break;
		else
			snake[t_x][t_y] = 1;

		if (apple[t_x][t_y])
			apple[t_x][t_y] = 0;
		else
		{
			snake[dq.back().first][dq.back().second] = 0;
			dq.pop_back();
		}
		
		if (dir[time] == 'D')
		{
			direction++;
			if (direction == 4)
				direction = 0;
		}
		else if (dir[time] == 'L')
		{
			direction--;
			if (direction == -1)
				direction = 3;
		}
	}

	cout << time << endl;
}