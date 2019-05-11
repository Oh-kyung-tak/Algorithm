#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < i; j++)
			printf("*");
		for (int j = (N * 2) - (2 * i); j > 0; j--)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			printf("*");
		for (int j = (N * 2) - (2 * i); j > 0; j--)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

