#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;
int fr[51][51];
int score[51];
int min_cnt = 99999;
vector<int> v;

int N;

int main()
{
	memset(fr, 0x3f, sizeof(fr));

	cin >> N;

	while (1)
	{
		int x, y;
		cin >> x >> y;

		if (x == -1 && y == -1)
			break;

		fr[x][y] = 1;
		fr[y][x] = 1;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (fr[i][k] + fr[k][j] < fr[i][j])
					fr[i][j] = fr[i][k] + fr[k][j];
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		int temp = 0;
		for (int j = 1; j <= N; j++)
		{
			if (i != j)
				temp = max(temp, fr[i][j]);
		}

		min_cnt = min(min_cnt, temp);
		score[i] = temp;
	}

	for (int i = 1; i <= N; i++)
		if (score[i] == min_cnt)
			v.push_back(i);

	cout << min_cnt << " " << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

