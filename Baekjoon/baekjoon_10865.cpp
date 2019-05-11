#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

int N, M;
int people[100001];

int main() 
{	
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		people[a]++;
		people[b]++;
	}

	for (int i = 1; i <= N; i++)
		printf("%d\n", people[i]);
	
}
