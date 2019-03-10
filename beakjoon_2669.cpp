#include<iostream>
#include<set>

using namespace std;
int map[101][101];
int cnt = 0;
int main()
{
	for (int i = 0; i < 4; i++)
	{
		int x1, y1;
		int x2, y2;

		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for (int i = x1; i < x2; i++)
		{
			for (int j = y1; j < y2; j++)
				map[i][j]++;
		}
	}

	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
			if (map[i][j] != 0)
				cnt++;
	}

	printf("%d", cnt);
}
