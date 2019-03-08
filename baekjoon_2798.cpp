#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int card[101];
int result;
vector<int> v;

void check_card(int sum, int num, int depth)
{
	if (depth == 3 && sum <= M)
	{
		result = max(result, sum);
		return;
	}
	if (num >= N || depth > 3 || sum > M)
		return;

	check_card(sum + card[num], num + 1, depth + 1);
	check_card(sum, num + 1, depth);
}

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &card[i]);

	check_card(0, 0, 0);

	printf("%d", result);
}
