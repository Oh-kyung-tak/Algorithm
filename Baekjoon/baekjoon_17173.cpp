#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
int N, M;
int sum = 0;
bool visited[1001];

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		int temp;
		scanf("%d", &temp);
		for (int j = temp; j <= N; j += temp)
			visited[j] = true;
	}

	for (int i = 0; i <= N; i++)
	{
		if (visited[i] == true)
			sum += i;
	}

	printf("%d", sum);
}