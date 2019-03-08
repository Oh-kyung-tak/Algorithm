#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

long long int map[16][16];
int n, m, k;
int dx, dy;
long long int first_num, second_num;

int main()
{
	for (int i = 1; i <= 16; i++)
	{
		map[i][1] = 1;
		map[1][i] = 1;
	}
	scanf("%d %d %d", &n, &m, &k);

	if (k == 0)
		k = 1;

	dx = (k / m) + 1;
	dy = k % m;

	if (dy == 0)
	{
		dy = m;
		dx--;
	}

	for (int i = 2; i <= dx; i++)
	{
		for (int j = 2; j <= dy; j++)
			map[i][j] = map[i - 1][j] + map[i][j - 1];
	}

	first_num = map[dx][dy];

	memset(map, 0, sizeof(map));

	for (int i = dx; i <= n; i++)
		map[i][dy] = 1;
	for (int i = dy; i <= m; i++)
		map[dx][i] = 1;

	for (int i = dx + 1; i <= n; i++)
	{
		for (int j = dy + 1; j <= m; j++)
			map[i][j] = map[i - 1][j] + map[i][j - 1];
	}

	second_num = map[n][m];

	printf("%d", first_num * second_num);
}
