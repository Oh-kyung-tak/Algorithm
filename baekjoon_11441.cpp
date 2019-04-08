#include <iostream>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;

int sum[100001];
int N, M;
int total_sum = 0;

int main() 
{
	scanf("%d", &N);
	memset(sum, 0, sizeof(sum));

	for (int i = 1; i <= N; i++)
	{
		int nn;
		scanf("%d", &nn);
		total_sum += nn;
		sum[i] = total_sum;
	}

	scanf("%d", &M);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", sum[b] - sum[a - 1]);
	}
}
