#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int N;

int main()
{
	cin >> N;
	int cnt = 2 * N - 1;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");

		for (int j = cnt; j > 0; j--)
			printf("*");

		printf("\n");
		cnt -= 2;
	}

	cnt += 4;

	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 1; j < i; j++)
			printf(" ");

		for (int j = cnt; j > 0; j--)
			printf("*");

		printf("\n");
		cnt += 2;
	}
}

