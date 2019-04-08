#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>

using namespace std;

vector<pair<int, int>> map_index;
vector<int> vv;
int copymap[11][11];
int map[11][11];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };
int N;
int min_money = 9999999;

int checkmap()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			if (copymap[i][j] >= 2)
				return 2;
	}
	return 1;
}
int main()
{
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			scanf("%d", &map[i][j]);
			if (i >= 2 && j >= 2 && i <= N - 1 && j <= N - 1)
				map_index.push_back(make_pair(i, j));
		}
	}

	for (int i = 0; i < map_index.size(); i++)
	{
		if (i < 3)
			vv.push_back(1);
		else
			vv.push_back(0);
	}

	do
	{
		memset(copymap, 0, sizeof(copymap));

		int sum = 0;

		for (int i = 0; i < map_index.size(); i++)
		{
			if (vv[i] == 1)
			{
				copymap[map_index[i].first][map_index[i].second]++;
				sum += map[map_index[i].first][map_index[i].second];
				for (int k = 0; k < 4; k++)
				{
					int xx = map_index[i].first + dx[k];
					int yy = map_index[i].second + dy[k];
					copymap[xx][yy]++;
					sum += map[xx][yy];
				}
				
			}
		}

		if (checkmap() == 1)
			min_money = min(min_money, sum);
		
			

	} while (prev_permutation(vv.begin(), vv.end()));

	printf("%d", min_money);
}
	

	
