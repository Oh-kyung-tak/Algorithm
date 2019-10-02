#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>
#include <map>

using namespace std;

int C;
double P, win, lose;
double ans = 0;
int K;

void check(int w, int l, double per)
{
	if (l >= K)
		return;

	if (w == K)
	{
		ans += per;
		return;
	}

	check(w + 1, l, per * win);
	check(w, l + 1, per * lose);
}

int main()
{
	cin >> C;

	while (C--)
	{
		ans = 0;
		cin >> P >> K;

		win = P / 100;
		lose = 1 - win;

		check(0,0,1);

		cout << fixed;
		cout.precision(0);
		cout << ans * 100 << endl;
	}
}