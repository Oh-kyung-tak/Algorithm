#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

// 2차원 배열 prefix sum 공식
using namespace std;
long long sum[1050][1050];
int R;
int N;

int main()
{
	scanf("%d %d", &R, &N);

	for (int i = 1; i <= R; i++)
	{
		for (int j = 1; j <= R; j++)
		{
			long long int num;
			scanf("%lld", &num);
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + num;
		}
	}

	while (N--)
	{
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		printf("%lld\n", sum[c][d] - sum[a - 1][d] - sum[c][b - 1] + sum[a - 1][b - 1]);
	}
}