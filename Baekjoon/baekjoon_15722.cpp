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

int time;
int cnt = 0;
int dir = 1;
int ttt = 0;
int xx = 1;

int x = 0, y = 0;

int time_cnt[1000];

int main()
{
	cin >> time;

	for (int i = 1; i <= 1000; i++)
	{
		if (i % 2 == 1)
			time_cnt[i] = (i / 2) + 1;
		else
			time_cnt[i] = i / 2;
	}

	while (1)
	{
		if (time == cnt)
			break;

		cout << x << " " << y << " " << dir << endl;
		if (dir == 1)
		{
			y++;
			ttt++;
			if (ttt == time_cnt[xx])
			{
				ttt = 0;
				dir = 2;
				xx++;
			}
		}
		else if (dir == 2)
		{
			x++;
			ttt++;

			if (ttt == time_cnt[xx])
			{
				ttt = 0;
				dir = 3;
				xx++;
			}
		}
		else if (dir == 3)
		{
			y--;
			ttt++;

			if (ttt == time_cnt[xx])
			{
				ttt = 0;
				dir = 4;
				xx++;
			}
		}
		else if(dir == 4)
		{
			x--;
			ttt++;

			if (ttt == time_cnt[xx])
			{
				ttt = 0;
				dir = 1;
				xx++;
			}
		}

		cnt++;
	}

	cout << x << " " << y << endl;
}