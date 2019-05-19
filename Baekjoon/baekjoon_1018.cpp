#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

string black[8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
string white[8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };
char chess[51][51];
int N, M;
int min_cnt = 99;

int check_b(int x, int y)
{
	int cnt = 0;
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (chess[x + i][y + j] != black[i][j])
				cnt++;
		}
	}
	return cnt;
}

int check_w(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (chess[x + i][y + j] != white[i][j])
				cnt++;
		}
	}
	return cnt;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> chess[i][j];

	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
			min_cnt = min({ min_cnt, check_b(i,j), check_w(i,j) });
	}
	
	cout << min_cnt << endl;
}