#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

int N, M;
int bingo[501][501];
int max_nine = 0;
int total_nine = 0;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> bingo[i][j];
			string word = to_string(bingo[i][j]);
			for (int k = 0; k < word.size(); k++)
			{
				if (word[k] == '9')
					total_nine++;
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		int nine = 0;
		for (int j = 1; j <= M; j++)
		{
			string word = to_string(bingo[i][j]);
			for (int k = 0; k < word.size(); k++)
			{
				if (word[k] == '9')
					nine++;
			}
		}

		max_nine = max(max_nine, nine);
	}

	for (int i = 1; i <= M; i++)
	{
		int nine = 0;
		for (int j = 1; j <= N; j++)
		{
			string word = to_string(bingo[j][i]);
			for (int k = 0; k < word.size(); k++)
			{
				if (word[k] == '9')
					nine++;
			}
		}
		max_nine = max(max_nine, nine);
	}

	cout << total_nine - max_nine << endl;
}