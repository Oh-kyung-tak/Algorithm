#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

char map[51][5][7];
vector<pair<int, int>> v;
int N;
int min_cnt = 50;
int x, y;
int main()
{
	cin >> N;

	for(int k = 1; k <= N; k++)
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 7; j++)
				cin >> map[k][i][j];

	for (int i = 1; i < N; i++)
	{
		for (int j = i + 1; j <= N; j++)
		{
			int diff = 0;
			for (int a = 0; a < 5; a++)
			{
				for (int b = 0; b < 7; b++)
				{
					if (map[i][a][b] != map[j][a][b])
						diff++;
				}
			}

			if (diff < min_cnt)
			{
				min_cnt = diff;
				x = i;
				y = j;
			}
		}
	}
	cout << x << " " << y;
}