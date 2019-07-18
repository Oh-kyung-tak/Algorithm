#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>

using namespace std;

bool robot[35][35];
int num;
double dir[4];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
double clear_dir = 1;

void check(int cnt, int x, int y, double cal)
{
	if (cnt == num)
		return;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (robot[xx][yy] == true)
			clear_dir -= cal * (dir[i] / 100);
		else
		{
			robot[xx][yy] = true;
			check(cnt + 1, xx, yy, cal * (dir[i] / 100));
			robot[xx][yy] = false;
		}
	}

}
int main()
{
	cin >> num;

	for (int i = 0; i < 4; i++)
		cin >> dir[i];

	robot[15][15] = true;
	check(0, 15, 15, 1);
	cout.precision(11); cout << fixed;
	cout << clear_dir << endl;
}