#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<stack>
#include<math.h>

using namespace std;

int sum_number[100001];
int N, M;

int main()
{
	scanf("%d %d", &N, &M);
	int sum = 0;

	for (int i = 1; i <= N; i++)
	{
		int temp;
		scanf("%d", &temp);
		sum += temp;
		sum_number[i] = sum;
	}

	for (int i = 0; i < M; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", sum_number[b] - sum_number[a - 1]);
	}
}
