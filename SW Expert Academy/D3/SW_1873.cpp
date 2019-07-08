#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

int T;
char map_d[22][22];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(map_d, '.', sizeof(map_d));
		int N, M;
		int cnt;
		int x, y;

		cin >> N >> M;
		
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				cin >> map_d[i][j];
				if (map_d[i][j] == '<' || map_d[i][j] == '^' || map_d[i][j] == 'v' || map_d[i][j] == '>')
				{
					x = i;
					y = j;
				}
			}
				
		}

		cin >> cnt;

		for (int i = 0; i < cnt; i++)
		{
			char c;
			cin >> c;
			if (c == 'U')
			{
				map_d[x][y] = '^';

				if (x - 1 > 0)
				{
					if (map_d[x - 1][y] == '.')
					{
						map_d[x - 1][y] = '^';
						map_d[x][y] = '.';
						x = x - 1;
					}
				}
			}
			else if (c == 'D')
			{
				map_d[x][y] = 'v';

				if (x + 1 <= N)
				{
					if (map_d[x + 1][y] == '.')
					{
						map_d[x + 1][y] = 'v';
						map_d[x][y] = '.';
						x = x + 1;
					}
				}
			}
			else if (c == 'L')
			{
				map_d[x][y] = '<';

				if (y - 1 > 0)
				{
					if (map_d[x][y - 1] == '.')
					{
						map_d[x][y - 1] = '<';
						map_d[x][y] = '.';
						y = y - 1;
					}
				}
			}
			else if (c == 'R')
			{
				map_d[x][y] = '>';

				if (y + 1 <= M)
				{
					if (map_d[x][y + 1] == '.')
					{
						map_d[x][y + 1] = '>';
						map_d[x][y] = '.';
						y = y + 1;
					}
				}
			}
			else
			{
				if (map_d[x][y] == '^')
				{
					int temp = -1;
					for (int i = x; i > 0; i--)
					{
						if (map_d[i][y] == '*' || map_d[i][y] == '#')
						{
							temp = i;
							break;
						}
					}
					if (temp != -1)
					{
						if (map_d[temp][y] == '*')
							map_d[temp][y] = '.';
					}
				}
				else if (map_d[x][y] == 'v')
				{
					int temp = -1;
					for (int i = x; i <= N; i++)
					{
						if (map_d[i][y] == '*' || map_d[i][y] == '#')
						{
							temp = i;
							break;
						}
					}
					if (temp != -1)
					{
						if (map_d[temp][y] == '*')
							map_d[temp][y] = '.';
					}
				}
				else if (map_d[x][y] == '>')
				{
					int temp = -1;
					for (int i = y; i <= M; i++)
					{
						if (map_d[x][i] == '*' || map_d[x][i] == '#')
						{
							temp = i;
							break;
						}
					}
					if (temp != -1)
					{
						if (map_d[x][temp] == '*')
							map_d[x][temp] = '.';
					}
				}
				else if (map_d[x][y] == '<')
				{
					int temp = -1;
					for (int i = y; i > 0; i--)
					{
						if (map_d[x][i] == '*' || map_d[x][i] == '#')
						{
							temp = i;
							break;
						}
					}
					if (temp != -1)
					{
						if (map_d[x][temp] == '*')
							map_d[x][temp] = '.';
					}
				}
			}
				
		}

		cout << "#" << Test_case << " ";
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
				cout << map_d[i][j];
			cout << endl;
		}
	}
}