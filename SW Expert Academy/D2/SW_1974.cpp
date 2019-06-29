#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int map[10][10];
int ck = 1;
bool num[10];

void check_map(int x, int y)
{
	memset(num, 0, sizeof(num));

	for(int i = x; i < x + 3; i++)
		for (int j = y; j < y + 3; j++)
		{
			if (num[map[i][j]])
				ck = 0;
			else
				num[map[i][j]] = 1;
		}
}

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		ck = 1;

		for (int i = 1; i <= 9; i++)
			for (int j = 1; j <= 9; j++)
				cin >> map[i][j];

		for (int i = 1; i <= 9; i++)
		{
			memset(num, 0, sizeof(num));
			for (int j = 1; j <= 9; j++)
			{
				if (num[map[i][j]])
					ck = 0;
				else
					num[map[i][j]] = 1;
			}
		}

		for (int i = 1; i <= 9; i++)
		{
			memset(num, 0, sizeof(num));
			for (int j = 1; j <= 9; j++)
			{
				if (num[map[j][i]])
					ck = 0;
				else
					num[map[j][i]] = 1;
			}
		}

		for (int i = 1; i <= 9; i += 3)
			for (int j = 1; j <= 9; j += 3)
				check_map(i, j);

			
		cout << "#" << k << " " << ck << endl;
	}
}