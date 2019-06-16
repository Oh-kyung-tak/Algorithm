#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

using namespace std;

int N;
int max_n = 0;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		max_n = max(max_n, temp);
	}

	printf("%d", max_n);
}