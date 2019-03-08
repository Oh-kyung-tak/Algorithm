#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int score[101];
int rank_num[101];
vector<pair<int, int>>v;

int main(void)
{
	int N, K;
	int count = 0;
	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			count++;

		if (count == K)
		{
			printf("%d", i);
			return 0;
		}
	}

	printf("0");
}
