#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>
#include <ctime>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= N - i; k++)
			printf(" ");
		if (i == 1 || i == N)
		{
			int cnt = 2 * i - 1;
			for (int j = 1; j <= cnt; j++)
				printf("*");
		}
		else
		{
			printf("*");
			int cnt = 2 * i - 3;
			for (int j = 1; j <= cnt; j++)
				printf(" ");
			printf("*");
		}

		printf("\n");
	}
}

