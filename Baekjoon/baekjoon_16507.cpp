#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

// 2차원 배열 prefix sum 공식
using namespace std;
long long sum[1001][1001];
int R, C;
int N;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> R >> C >> N;

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= C; j++)
		{
			long long int num;
			cin >> num;
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + num;
		}
	}

	while (N--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int width = (c - a + 1) * (d - b + 1);
		cout << (sum[c][d] - sum[a - 1][d] - sum[c][b - 1] + sum[a - 1][b - 1]) / width << endl;
	}
}