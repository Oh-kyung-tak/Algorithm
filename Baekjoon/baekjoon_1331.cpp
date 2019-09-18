#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

vector<string> v;
bool visited[7][7];
bool ck = true;
bool last = false;
int x, y;
int s_x, s_y;
int dx[8] = { 1,2,1,2,-1,-2,-1,-2 };
int dy[8] = { -2,-1,2,1,-2,-1,2,1 };

int main()
{
	for (int i = 0; i < 36; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	s_x = v[0][0] - 'A' + 1;
	s_y = v[0][1] - '0';

	x = s_x;
	y = s_y;
	visited[x][y] = true;

	for (int i = 1; i < 36; i++)
	{
		bool cc = false;
		int t_x = v[i][0] - 'A' + 1;
		int t_y = v[i][1] - '0';

		if (visited[t_x][t_y] || t_x < 1 || t_y < 1 || t_x > 6 || t_y > 6)
		{
			ck = false;
			break;
		}

		visited[t_x][t_y] = true;

		for (int j = 0; j < 8; j++)
		{
			int xx = t_x - x;
			int yy = t_y - y;

			if (xx == dx[j] && yy == dy[j])
			{
				x = t_x;
				y = t_y;
				cc = true;
				break;
			}
		}

		if (!cc)
		{
			ck = false;
			break;
		}
	}

	for (int j = 0; j < 8; j++)
	{
		int xx = s_x - x;
		int yy = s_y - y;

		if (xx == dx[j] && yy == dy[j])
		{
			last = true;
			break;
		}
	}

	if (!last)
		ck = false;

	if (ck)
		cout << "Valid" << endl;
	else
		cout << "Invalid" << endl;
}