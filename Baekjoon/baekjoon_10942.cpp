#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int N, M;
int num[2010];
bool pal[2010][2010];

int main()
{
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &num[i]);
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			if (i == j)
				pal[j][i] = true;
			else
			{
				if (num[j] == num[i])
				{
					if (i - j == 1)
						pal[j][i] = true;
					else
					{
						if (pal[j + 1][i - 1] == true)
							pal[j][i] = true;
						else
							pal[j][i] = false;
					}
				}
			}
		}
	}

	scanf("%d", &M);

	for (int i = 0; i < M; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		if (pal[x][y])
			printf("1\n");
		else
			printf("0\n");
	}
}