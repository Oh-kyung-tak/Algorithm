#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

int N;
int x, y, d, g;
bool visited[101][101];
int pattern[4][1024];

void makepattern()
{
	pattern[0][0] = 0;
	pattern[1][0] = 1;
	pattern[2][0] = 2;
	pattern[3][0] = 3;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			int start = pow(2, j - 1);
			int end = pow(2, j);
			for (int k = start, l = 1; k < end; k++, l += 2)
			{
				pattern[i][k] = pattern[i][k - l] + 1 == 4 ? 0 : pattern[i][k - l] + 1;
			}
		}
	}
}
int main()
{ 
	scanf("%d", &N);
	makepattern();
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d %d", &x, &y, &d, &g);
		int xx = x;
		int yy = y;
		visited[yy][xx] = true;
		int end = pow(2, g);
		for (int j = 0; j < end; j++)
		{
			if (pattern[d][j] == 0)
				xx += 1;
			else if (pattern[d][j] == 1)
				yy -= 1;
			else if (pattern[d][j] == 2)
				xx -= 1;
			else 
				yy += 1;

			visited[yy][xx] = true;
		}
	}

	int cnt = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (visited[i][j] && visited[i][j + 1] && visited[i + 1][j] && visited[i + 1][j + 1])
				cnt++;
		}
	}
	
	cout << cnt << endl;
}