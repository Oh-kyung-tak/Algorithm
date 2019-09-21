#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int T;

int J[1001][1001];
int O[1001][1001];
int I[1001][1001];

// prefix sum
int main()
{
	scanf("%d %d", &N, &M);
	scanf("%d", &T);
	getchar();

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			char t;
			scanf("%c", &t);
			if (t == 'J')
				J[i][j]++;
			else if (t == 'O')
				O[i][j]++;
			else
				I[i][j]++;
		}
		getchar();
	}

	for (int i = 1; i <= N; i++) 
	{
		for (int j = 1; j <= M; j++) 
		{
			J[i][j] += J[i][j - 1] + J[i - 1][j] - J[i - 1][j - 1];
			O[i][j] += O[i][j - 1] + O[i - 1][j] - O[i - 1][j - 1];
			I[i][j] += I[i][j - 1] + I[i - 1][j] - I[i - 1][j - 1];
		}
	}
	
	while (T--)
	{
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		int a = J[x2][y2] - J[x1 - 1][y2] - J[x2][y1 - 1] + J[x1 - 1][y1 - 1];
		int b = O[x2][y2] - O[x1 - 1][y2] - O[x2][y1 - 1] + O[x1 - 1][y1 - 1];
		int c = I[x2][y2] - I[x1 - 1][y2] - I[x2][y1 - 1] + I[x1 - 1][y1 - 1];

		printf("%d %d %d\n", a, b, c);
	}
}