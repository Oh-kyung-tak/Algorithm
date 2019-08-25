#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> v;
int cc[105][105];
int M, N;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int cnt = 0;
int number_of_area = 0;
int max_size_of_one_area = 0;

void check(int x, int y, int n)
{
	cc[x][y] = 1;
	cnt += 1;

	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx >= 0 && yy >= 0 && xx < M && yy < N)
		{
			if (!cc[xx][yy] && (n == v[xx][yy]))
				check(xx, yy, n);
		}
	}
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {

	memset(cc, 0, sizeof(cc));
	v = picture;
	M = m;
	N = n;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (v[i][j] != 0 && !cc[i][j])
			{
				cnt = 0;
				check(i, j, v[i][j]);
				number_of_area++;
				max_size_of_one_area = max(max_size_of_one_area, cnt);
			}
		}
	}

	vector<int> answer(2);
	answer[0] = number_of_area;
	answer[1] = max_size_of_one_area;
	return answer;
}