#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

int N;

int two_check(int n)
{
	int cnt = 0;
	int start = 2;
	
	while (1)
	{
		if (n < start)
			break;

		cnt += n / start;
		start *= 2;
	}

	return cnt;
}

int five_check(int n)
{
	int cnt = 0;
	int start = 5;

	while (1)
	{
		if (n < start)
			break;

		cnt += n / start;
		start *= 5;
	}

	return cnt;
}

int main()
{
	scanf("%d", &N);

	while (N--)
	{
		int temp;
		scanf("%d", &temp);

		int a = two_check(temp);
		int b = five_check(temp);

		printf("%d\n", min(a, b));
	}
}