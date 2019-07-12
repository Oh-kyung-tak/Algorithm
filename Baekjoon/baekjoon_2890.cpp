#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>

using namespace std;
char board[51][51];
vector<pair<int, int>> v;

int R, C;
int score[51];
int sss = -1;
int cnt = 0;

int main()
{
	cin >> R >> C;

	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
			cin >> board[i][j];

	for (int i = 1; i <= R; i++)
	{
		int temp = 0;
		for (int j = C - 1; j >= 0; j--)
		{
			if (board[i][j] != '.' && board[i][j] != 'S')
			{
				v.push_back({ temp, board[i][j] - '0' });
				break;
			}
			else
				temp++;
		}
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		int temp = v[i].first;

		if (temp == sss)
			score[v[i].second] = cnt;
		else
		{
			cnt += 1;
			score[v[i].second] = cnt;
			sss = temp;
		}
	}

	for (int i = 1; i <= 9; i++)
		cout << score[i] << endl;
}