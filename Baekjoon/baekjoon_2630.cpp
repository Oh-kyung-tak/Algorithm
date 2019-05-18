#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool map[129][129];
int zero_cnt = 0;
int one_cnt = 0;
int N;

void check_map(int x, int y, int n)
{
	bool zero = false;
	bool one = false;

	if (n == 1)
	{
		if (map[x][y] == 0)
		{
			zero_cnt++;
			return;
		}
		else
		{
			one_cnt++;
			return;
		}
	}

	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (map[i][j] == 0)
				zero = true;
			else
				one = true;
		}
	}
	
	if (zero == true && one == true)
	{
		check_map(x, y, n / 2);
		check_map(x + n / 2, y, n / 2);
		check_map(x, y + n / 2, n / 2);
		check_map(x + n / 2, y + n / 2, n / 2);
	}
	else
	{
		if (zero == true)
		{
			zero_cnt++;
			return;
		}
		else
		{
			one_cnt++;
			return;
		}
	}
}

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &map[i][j]);

	check_map(0, 0, N);

	printf("%d\n%d", zero_cnt, one_cnt);
}