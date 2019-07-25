#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>
const int INF = 1000000000;

using namespace std;

int N;

int main()
{

	scanf("%d", &N);

	while (N--)
	{
		int N;
		int max_n = -1;
		scanf("%d", &N);

		while (1)
		{
			max_n = max(max_n, N);

			if (N == 1)
				break;

			if (N % 2 == 0)
				N /= 2;
			else
				N = (N * 3) + 1;
		}

		printf("%d\n", max_n);
	}

}