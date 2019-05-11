#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int N;

int main()
{
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = N - i; j > 0; j--)
			printf(" ");

		for (int k = 1; k <= i; k++)
			printf("*");

		printf("\n");
	}

	for (int i = N - 1; i >= 1; i--)
	{
		for (int j = N - i; j > 0; j--)
			printf(" ");

		for (int k = 1; k <= i; k++)
			printf("*");

		printf("\n");
	}
}
