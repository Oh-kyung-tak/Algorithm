#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

char cloud[101][101];
int cloudmap[101][101];

int main()
{
	memset(cloudmap, -1, sizeof(cloudmap));
	int W, H;

	scanf("%d %d", &W, &H);
	getchar();
	
	for (int i = 1; i <= W; i++)
	{
		for (int j = 1; j <= H; j++)
		{
			scanf("%c", &cloud[i][j]);
			if (cloud[i][j] == 'c')
				cloudmap[i][j] = 0; 
		}

		getchar();
	}
	
	for (int i = 1; i <= W; i++)
	{
		for (int j = 1; j <= H; j++)
		{
			int cnt = 1;
			if (cloudmap[i][j] == 0)
			{
				while (1)
				{
					if (cloudmap[i][j + cnt] < 0 && j + cnt <= H)
						cloudmap[i][j + cnt] = cnt;
					else
						break;
					cnt++;
				}
			}
		}
	}

	for (int i = 1; i <= W; i++)
	{
		for (int j = 1; j <= H; j++)
		{
			printf("%d ", cloudmap[i][j]);
		}
		printf("\n");
	}
}
