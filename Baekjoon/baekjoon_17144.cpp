#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int R, C, T;
int current[51][51];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
vector<int> v;

void spread()
{
	int temp[51][51];
	memset(temp, 0, sizeof(temp));

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			if (current[i][j] > 0)
			{
				int cnt = 0;
				for (int k = 0; k < 4; k++)
				{
					int xx = i + dx[k];
					int yy = j + dy[k];

					if (xx > 0 && yy > 0 && xx <= R && yy <= C && current[xx][yy] != -1)
					{
						temp[xx][yy] += current[i][j] / 5;
						cnt++;
					}
				}
				temp[i][j] += current[i][j] - ((current[i][j] / 5) * cnt);
			}
		}
	}

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			if (current[i][j] != -1)
				current[i][j] = temp[i][j];
		}
	}
}

void check()
{
	for (int cnt = 0; cnt < 2; cnt++)
	{
		if (cnt == 0)
		{
			for (int i = v[cnt]- 1; i > 1; i--)
				current[i][1] = current[i - 1][1];

			for (int i = 1; i < C; i++)
				current[1][i] = current[1][i + 1];

			for (int i = 1; i < v[cnt]; i++)
				current[i][C] = current[i + 1][C];

			for (int i = C; i > 1; i--)
				current[v[cnt]][i] = current[v[cnt]][i - 1];

			current[v[cnt]][2] = 0;
		}
		else
		{
			for (int i = v[cnt] + 1; i < R; i++)
				current[i][1] = current[i + 1][1];

			for (int i = 1; i < C; i++)
				current[R][i] = current[R][i + 1];

			for (int i = R; i > v[cnt]; i--)
				current[i][C] = current[i - 1][C];

			for (int i = C; i > 1; i--)
				current[v[cnt]][i] = current[v[cnt]][i - 1];

			current[v[cnt]][2] = 0;
		}
	}
}

int sum()
{
	int s = 0;

	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
			if (current[i][j] > 0)
				s += current[i][j];

	return s;
}

int main(void)
{
	cin >> R >> C >> T;

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			cin >> current[i][j];
			if (current[i][j] == -1)
				v.push_back(i);
		}	
	}

	while (T--)
	{
		spread();
		check();
	}

	cout << sum() << endl;
}