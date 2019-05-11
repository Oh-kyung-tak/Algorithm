#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int N, C;
int pung[2000001];
int cnt = 0;

int main()
{
	scanf("%d %d", &N, &C);

	while (N--)
	{
		int num;
		scanf("%d", &num);

		for (int i = 1; i <= C; i++)
		{
			if (i % num == 0)
				pung[i]++;
		}
	}

	for (int i = 1; i <= C; i++)
	{
		if (pung[i])
			cnt++;
	}

	printf("%d", cnt);
}
