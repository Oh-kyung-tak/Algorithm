#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int N, M;
int triangle[32][32];
int main()
{
	cin >> N >> M;
	int end = 3;

	triangle[1][1] = 1;
	triangle[2][1] = 1;
	triangle[2][2] = 1;

	for (int i = 3; i <= 30; i++)
	{
		for (int j = 1; j <= end; j++)
		{
			if (j == 1 || j == end)
				triangle[i][j] = 1;
			else
				triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];

		}
		end++;
	}

	cout << triangle[N][M] << endl;
}