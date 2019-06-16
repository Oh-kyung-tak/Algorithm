#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int N;
int map[101][101];
int sum[101][101];
int rl = 0, ll = 0;
int hap;
bool chk = true;
int visited[10000];
int main()
{
	cin >> N;
	hap = N * (N * N + 1) / 2;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
			visited[map[i][j]]++;

			sum[i][N] += map[i][j];
			sum[N][j] += map[i][j];

			if (i == j)
				ll += map[i][j];

			if (i + j == N - 1)
				rl += map[i][j];
		}
	}

	if (ll != hap || rl != hap)
		chk = false;

	for (int i = 0; i < N; i++)
	{
		if (hap != sum[i][N] || hap != sum[N][i])
			chk = false;
	}

	for (int i = 1; i <= N * N; i++)
	{
		if (visited[i] > 1)
		{
			chk = false;
			break;
		}
	}

	if (chk)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
}