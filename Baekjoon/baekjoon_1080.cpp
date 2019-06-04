#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

// 3*3의 행렬이 되지 않으면 수행하면 안됨
char map[55][55];
char check_map[55][55];
int N, M;
int cnt = 0;

void make_map(int x, int y)
{
	for(int i = x; i < x + 3; i++)
		for (int j = y; j < y + 3; j++)
		{
			if (map[i][j] == '0')
				map[i][j] = '1';
			else
				map[i][j] = '0';
		}
}

bool check()
{
	bool ck = true;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			if (map[i][j] != check_map[i][j])
			{
				ck = false;
				break;
			}
		}

	return ck;
}

int main() 
{
	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> check_map[i][j];

	if (check())
	{
		cout << cnt << endl;
		return 0;
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
			if (map[i][j] != check_map[i][j])
			{
				make_map(i, j);
				cnt++;

				if (check())
				{
					cout << cnt << endl;
					return 0;
				}
			}
				
		}
	}
		
	cout << "-1" << endl;
	return 0;
}