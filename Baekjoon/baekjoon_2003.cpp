#include <stdio.h>
#include <map>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;
int sum_array[10001];

int main() {

	int N, M;
	int sum = 0;
	int count = 0;
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
	{
		int temp;
		scanf("%d", &temp);
		sum += temp;
		sum_array[i] = sum;
	}

	for (int i = 1; i <= N; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if (sum_array[i] - sum_array[j] == M)
			{
				count++;
				break;
			}
		}
	}

	printf("%d", count);
}
