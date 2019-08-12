#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
bool m[1001][1001];
vector<pair<int, int>> v;

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> m[i][j];

	for(int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			if (m[i][j] == 1)
				v.push_back({ i,j });
		}

	cout << abs(v[0].first - v[1].first) + abs(v[0].second - v[1].second);
}

