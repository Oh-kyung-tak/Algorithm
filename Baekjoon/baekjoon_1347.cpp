#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

char map[101][101];
int x = 50, y = 50;
int N;
int dir = 3;
int min_x = 200, min_y = 200;
int max_x = -1, max_y = -1;

int main()
{
	cin >> N;
	memset(map, '#', sizeof(map));

	map[x][y] = '.';

	for (int i = 0; i < N; i++)
	{
		char c;
		cin >> c;

		if (c == 'R')
		{
			dir++;
			if (dir == 5)
				dir = 1;
		}
		else if (c == 'L')
		{
			dir--;
			if (dir == 0)
				dir = 4;
		}
		else
		{
			if (dir == 1)
				x--;
			else if (dir == 2)
				y++;
			else if (dir == 3)
				x++;
			else
				y--;

			map[x][y] = '.';
		}
	}

	for (int i = 0; i <= 101; i++)
	{
		for (int j = 0; j <= 101; j++)
		{
			if (map[i][j] == '.')
			{
				min_x = min(min_x, i);
				max_x = max(max_x, i);
				min_y = min(min_y, j);
				max_y = max(max_y, j);
			}
		}
	}

	for (int i = min_x; i <= max_x; i++)
	{
		for (int j = min_y; j <= max_y; j++)
			cout << map[i][j];

		cout << endl;
	}
		
}