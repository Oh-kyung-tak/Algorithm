#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;
char candy[51][51];
int max_candy = 1;
int N;

void countcandy()
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < N; j++)
		{
			int x_count = 1;
			int y_count = 1;
			while (candy[i][j] == candy[i + x_count][j])
			{
				x_count++;
			}
			while (candy[i][j] == candy[i][j + y_count])
			{
				y_count++;
			}
			max_candy = max(max_candy, max(x_count, y_count)); 
		}
	}
}

int main(void) 
{
	scanf("%d", &N);
	getchar();
	memset(candy, '0' , sizeof(candy));
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			scanf("%c", &candy[i][j]);

		getchar();
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (candy[i][j] != candy[i][j + 1])
			{
				char temp;
				temp = candy[i][j];
				candy[i][j] = candy[i][j + 1];
				candy[i][j + 1] = temp;

				countcandy();

				temp = candy[i][j];
				candy[i][j] = candy[i][j + 1];
				candy[i][j + 1] = temp;
			}

			if (candy[i][j] != candy[i + 1][j])
			{
				char temp;
				temp = candy[i][j];
				candy[i][j] = candy[i + 1][j];
				candy[i + 1][j] = temp;

				countcandy();

				temp = candy[i][j];
				candy[i][j] = candy[i + 1][j];
				candy[i + 1][j] = temp;
			}
		}
	}

	printf("%d", max_candy);
}
