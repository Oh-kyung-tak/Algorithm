#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;

int aa[100001];

int main()
{
	int incre_max = -1;
	int decre_max = -1;
	int incre_count = 1;
	int decre_count = 1;
	int N;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &aa[i]);

	if (N == 1)
	{
		printf("1");
		return 0;
	}

	for (int i = 1; i < N; i++)
	{
		if (aa[i] < aa[i + 1])
		{
			incre_count++;
			decre_max = max(decre_max, decre_count);
			decre_count = 1;
		}
		if (aa[i] > aa[i + 1])
		{
			decre_count++;
			incre_max = max(incre_max, incre_count);
			incre_count = 1;
		}
		if(aa[i] == aa[i + 1])
		{
			incre_count++;
			decre_count++;
		}
	}

	decre_max = max(decre_max, decre_count);
	incre_max = max(incre_max, incre_count);

	printf("%d", max(incre_max, decre_max));
}
