#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <queue>

using namespace std;

char mm[101][101];
int N;
int ga = 0, se = 0;

int main()
{
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			scanf("%c", &mm[i][j]);

		getchar();
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j == 0)
			{
				if (mm[i][j] == '.' && mm[i][j + 1] == '.')
					ga++;
			}
			else
			{
				if (mm[i][j] == '.' && mm[i][j + 1] == '.')
				{
					if (mm[i][j - 1] == 'X')
						ga++;
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0)
			{
				if (mm[i][j] == '.' && mm[i+1][j] == '.')
					se++;
			}
			else
			{
				if (mm[i][j] == '.' && mm[i+1][j] == '.')
				{
					if (mm[i - 1][j] == 'X')
						se++;
				}
			}
		}
	}

	printf("%d %d", ga, se);
}
