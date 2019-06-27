#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int max_n = 0;
int N, M;
int map[40][40];

void chk(int x, int y)
{
	int sum = 0;

	for (int i = x; i < x + M; i++)
		for (int j = y; j < y + M; j++)
			sum += map[i][j];

	max_n = max(sum, max_n);
}

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		memset(map, 0, sizeof(map));
		max_n = 0;

		cin >> N >> M;

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				cin >> map[i][j];

		for(int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				chk(i, j);
			

		cout << "#" << k << " " << max_n << endl;
	}
}