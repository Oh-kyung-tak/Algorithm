#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>

using namespace std;

char water[11][11];
bool map_rr[11][11];
int r, c;
vector<pair<int, int>> v;
int min_xx = 99999;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;

	for(int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
		{
			cin >> water[i][j];

			if (water[i][j] == 'o')
			{
				v.push_back({ i,j });
				map_rr[i][j] = 1;
			}
		}

	for (int i = 0; i < v.size(); i++)
	{
		int x = v[i].first;
		int y = v[i].second;

		for (int j = 1; j <= 10; j++)
		{
			map_rr[x][j] = 1;
			map_rr[j][y] = 1;
		}
	}

	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			if (map_rr[i][j] == 0)
				min_xx = min(min_xx, abs(r - i) + abs(c - j));
	
	cout << min_xx << endl;
}