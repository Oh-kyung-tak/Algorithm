#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int map[8][8];

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		int N;
		cin >> N;

		memset(map, 0, sizeof(map));

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				cin >> map[i][j];

		cout << "#" << k << endl;

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= 3; j++)
			{
				if (j == 1)
				{
					for (int x = N; x >= 1; x--)
						cout << map[x][i];
				}
				else if (j == 2)
				{
					for (int x = N; x >= 1; x--)
						cout << map[N + 1 - i][x];
				}
				else
				{
					for (int x = 1; x <= N; x++)
						cout << map[x][N + 1 - i];
				}
				cout << " ";
			}
			cout << endl;
		}
	}
}