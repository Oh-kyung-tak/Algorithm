#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int ss[1001];
int score[1001];

int N, M;
int maxnn = -1;
int number = 0;

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
		scanf("%d", &ss[i]);

	for (int i = 1; i <= M; i++)
	{
		int charge;
		scanf("%d", &charge);

		for (int j = 1; j <= N; j++)
		{
			if (ss[j] <= charge)
			{
				score[j]++;
				break;
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		if (maxnn < score[i])
		{
			maxnn = score[i];
			number = i;
		}
			
	}

	printf("%d", number);
}
