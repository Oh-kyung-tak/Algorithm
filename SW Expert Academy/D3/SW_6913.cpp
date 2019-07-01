#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
bool map[21][21]; 
int score[21];

int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		memset(map, false, sizeof(map));
		memset(score, 0, sizeof(score));

		int x, y;
		int max_cnt = 0;
		int people = 0;

		cin >> x >> y;

		for (int i = 1; i <= x; i++)
		{
			for (int j = 1; j <= y; j++)
			{
				cin >> map[i][j];
				if (map[i][j])
					score[i] += 1;
			}
				
		}

		for (int i = 1; i <= x; i++)
			max_cnt = max(max_cnt, score[i]);

		for (int i = 1; i <= x; i++)
		if (max_cnt == score[i])
			people++;
		cout << "#" << Test_case << " " << people << " " << max_cnt << endl;
	}
}