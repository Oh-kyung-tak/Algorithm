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
vector<int> animal;

char fr[6][6];
int cnt = 0;
int fr_cnt = 1;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
bool visited[6][6];
bool ss[6][6];

vector<int> v;

void check(int x, int y)
{
	ss[x][y] = true;

	for (int k = 0; k < 4; k++)
	{
		int xx = x + dx[k];
		int yy = y + dy[k];

		if(xx >= 0 && yy >= 0 && xx <= 5 && yy <= 5)
			if (visited[xx][yy] == true && ss[xx][yy] == false)
			{
				ss[xx][yy] = true;
				fr_cnt++;
				check(xx, yy);
			}
	}
}

int main()
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> fr[i][j];

	for (int i = 0; i < 25; i++)
	{
		if (i > 6)
			v.push_back(0);
		else
			v.push_back(1);
	}

	do
	{
		memset(visited, false, sizeof(visited));
		memset(ss, false, sizeof(ss));

		int s_cnt = 0;
		int y_cnt = 0;
		int x , y;

		fr_cnt = 1;

		for (int i = 0; i < 25; i++)
		{
			if (v[i] == 1)
			{
				if (fr[i / 5][i % 5] == 'Y')
					y_cnt++;
				else
					s_cnt++;

				visited[i/ 5][i % 5] = true;

				x = i / 5;
				y = i % 5;
			}
		}

		if (s_cnt >= 4)
			check(x, y);
		
		if (fr_cnt == 7)
			cnt++;

	} while (prev_permutation(v.begin(), v.end()));
		

	cout << cnt << endl;
}