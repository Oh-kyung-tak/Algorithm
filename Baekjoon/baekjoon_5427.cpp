#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int T;
int w, h;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
char building[1010][1010];
bool person[1010][1010];
bool fire[1010][1010];
queue<pair<int, int>> fq;
queue<pair<int, int>> pq;

int main()
{
	cin >> T;

	while (T--)
	{
		cin >> w >> h;
		
		while (!fq.empty())
			fq.pop();
		while (!pq.empty())
			pq.pop();

		memset(building, '.', sizeof(building));
		memset(person, false, sizeof(person));
		memset(fire, false, sizeof(fire));
		bool ck = false;
		int cnt = 0;

		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				cin >> building[i][j];
				if (building[i][j] == '*')
				{
					fq.push({ i,j });
					fire[i][j] = true;
				}

				if (building[i][j] == '@')
				{
					pq.push({ i,j });
					person[i][j] = true;
				}
			}
		}
		
		while (1)
		{
			if (ck)
				break;

			int f_size = fq.size();
			int p_size = pq.size();

			if (p_size == 0)
				break;

			for (int i = 0; i < f_size; i++)
			{
				int x = fq.front().first;
				int y = fq.front().second;
				fq.pop();

				for (int j = 0; j < 4; j++)
				{
					int xx = x + dx[j];
					int yy = y + dy[j];

					if (xx > 0 && yy > 0 && xx <= h && yy <= w)
					{
						if ((building[xx][yy] == '.' || building[xx][yy] == '@') && !fire[xx][yy])
						{
							fq.push({ xx,yy });
							building[xx][yy] = '*';
							fire[x][y] = true;
						}
					}
				}
			}

			for (int i = 0; i < p_size; i++)
			{
				int x = pq.front().first;
				int y = pq.front().second;
				pq.pop();

				for (int j = 0; j < 4; j++)
				{
					int xx = x + dx[j];
					int yy = y + dy[j];

					if (xx == 0 || yy == 0 || xx == h + 1 || yy == w + 1)
					{
						if (building[xx][yy] == '.')
						{
							ck = true;
							break;
						}
					}

					if (xx > 0 && yy > 0 && xx <= h && yy <= w)
					{
						if (building[xx][yy] == '.' && !person[xx][yy])
						{
							pq.push({ xx,yy });
							building[xx][yy] = '@';
							person[xx][yy] = true;
						}
					}
				}
			}

			cnt++;
		}

		if (ck)
			cout << cnt << endl;
		else
			cout << "IMPOSSIBLE" << endl;
	}
}
