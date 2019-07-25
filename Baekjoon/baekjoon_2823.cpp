#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>

using namespace std;

int R, C;
char road[11][11];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int main()
{
	cin >> R >> C;

	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
			cin >> road[i][j];


	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			if (road[i][j] == '.')
			{
				int cc = 0;

				for (int k = 0; k < 4; k++)
				{
					int xx = i + dx[k];
					int yy = j + dy[k];

					if (xx > 0 && yy > 0 && xx <= R && yy <= C)
					{
						if (road[xx][yy] == '.')
							cc++;
					}
				}

				if (cc <= 1)
				{
					cout << "1" << endl;
					return 0;
				}
			}
		}
	}

	cout << "0" << endl;
}