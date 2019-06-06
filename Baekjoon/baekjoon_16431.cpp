#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

bool map[1001][1001];
int N, M;
int b_x, b_y;
int d_x, d_y;
int b_cnt = 0;
int d_cnt = 0;

int dx[8] = { -1,0,0,1,-1,-1,1,1 };
int dy[8] = { 0,1,-1,0,1,-1,1,-1 };

void b_chk(int x, int y)
{
	queue<pair<int, int>>q;
	q.push({ x,y });
	map[x][y] = true;
	
	while(1)
	{
		int size = q.size();

		for(int i = 0; i < size; i++)
		{ 
			int xx = q.front().first;
			int yy = q.front().second;
			q.pop();

			if (xx == N & yy == M)
				return;
			
			for (int i = 0; i < 8; i++)
			{
				int t_xx = xx + dx[i];
				int t_yy = yy + dy[i];
				if (!map[t_xx][t_yy] && t_xx >= 1 && t_yy >= 1 && t_xx <= 1000 && t_yy <= 1000)
				{
					map[t_xx][t_yy] = true;
					q.push({ t_xx, t_yy });
				}
			}
			
		}
		b_cnt++;
	}
}

void d_chk(int x, int y)
{
	queue<pair<int, int>>q;
	q.push({ x,y });
	map[x][y] = true;

	while (1)
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int xx = q.front().first;
			int yy = q.front().second;
			q.pop();

			if (xx == N & yy == M)
				return;

			for (int i = 0; i < 4; i++)
			{
				int t_xx = xx + dx[i];
				int t_yy = yy + dy[i];
				if (!map[t_xx][t_yy] && t_xx >= 1 && t_yy >= 1 && t_xx <= 1000 && t_yy <= 1000)
				{
					map[t_xx][t_yy] = true;
					q.push({ t_xx, t_yy });
				}
			}

		}
		d_cnt++;
	}
}
int main()
{
	cin >> b_x >> b_y;
	cin >> d_x >> d_y;
	cin >> N >> M;

	memset(map, false, sizeof(map));
	b_chk(b_x, b_y);
	memset(map, false, sizeof(map));
	d_chk(d_x, d_y);

	if (b_cnt > d_cnt)
		cout << "daisy";
	else if (b_cnt < d_cnt)
		cout << "bessie";
	else
		cout << "tie";
}