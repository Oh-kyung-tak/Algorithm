#include<iostream>
#include<algorithm>

using namespace std;

int N, M;

int aa[1000001];
int bb[1000001]; 

int a_s = 1, b_s = 1;

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
		scanf("%d", &aa[i]);

	for (int i = 1; i <= M; i++)
		scanf("%d", &bb[i]);

	while (1)
	{
		if (a_s == N + 1 || b_s == M + 1)
			break;

		if (aa[a_s] <= bb[b_s])
		{
			printf("%d ", aa[a_s]);
			a_s++;
		}
		else
		{
			printf("%d ", bb[b_s]);
			b_s++;
		}
	}

	if (a_s == N + 1)
	{
		for (int i = b_s; i <= M; i++)
			printf("%d ", bb[i]);
	}
	else
	{
		for (int i = a_s; i <= N; i++)
			printf("%d ", aa[i]);
	}
}
