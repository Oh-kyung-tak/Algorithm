#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
int map[3000][3000];

int num;
vector<int> v;
void check(int x, int y, int num)
{
	int divide = num / 3;
	int p_num = map[x][y];
	int chk = 1;
	if (num == 1)
	{
		v.push_back(p_num);
		return;
	}
	for (int i = x; i <  x + num; i++)
	{
		for (int j = y; j < y + num; j++)
			if (p_num != map[i][j])
			{
				chk = 0;
				break;
			}
	}
	
	if (chk == 0)
	{
		check(x, y, divide);
		check(x + divide, y, divide);
		check(x + 2 * divide, y, divide);
		check(x, y + divide, divide);
		check(x, y + 2 * divide, divide);
		check(x + divide, y + divide, divide);
		check(x + 2 * divide, y + divide, divide);
		check(x + divide, y + 2 * divide, divide);
		check(x + 2 * divide, y + 2 * divide, divide);
	}
	else
		v.push_back(p_num);
	
}
int main()
{
	scanf("%d", &num);
	int minus = 0;
	int zero = 0;
	int plus = 0;
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			scanf("%d", &map[i][j]);

	check(0,0, num);

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == -1)
			minus++;
		else if (v[i] == 0)
			zero++;
		else if (v[i] == 1)
			plus++;
	}

	printf("%d\n%d\n%d", minus, zero, plus);
}
