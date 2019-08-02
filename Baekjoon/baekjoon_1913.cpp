#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int dal[1001][1001];
int N, M;
int cnt;
int ex;
int dir = 1;
int x = 1, y = 1;
int dx, dy;

int main()
{
	cin >> N >> M;

	cnt = N * N;
	ex = N;

	while (1)
	{
		for (int i = 1; i <= ex; i++)
		{
			dal[x][y] = cnt;
			if (cnt == M)
			{
				dx = x;
				dy = y;
			}
			x += dir;
			cnt--;
		}
		
		x--;
		ex--;
		y++;

		if (ex == 0)
			break;

		for (int i = 1; i <= ex; i++)
		{
			dal[x][y] = cnt;
			if (cnt == M)
			{
				dx = x;
				dy = y;
			}
			y += dir;
			cnt--;
		}
		
		y--;
		dir *= -1;
		x--;

		if (ex == 0)
			break;

		for (int i = 1; i <= ex; i++)
		{
			dal[x][y] = cnt;
			if (cnt == M)
			{
				dx = x;
				dy = y;
			}
			x += dir;
			cnt--;
		}

		x++;
		ex--;
		y--;

		if (ex == 0)
			break;

		for (int i = 1; i <= ex; i++)
		{
			dal[x][y] = cnt;
			if (cnt == M)
			{
				dx = x;
				dy = y;
			}
			y += dir;
			cnt--;
		}

		y++;
		dir *= -1;
		x++;

		if (ex == 0)
			break;
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			cout << dal[i][j] << " ";

		cout << endl;
	}
	cout << dx << " " << dy << endl;
}