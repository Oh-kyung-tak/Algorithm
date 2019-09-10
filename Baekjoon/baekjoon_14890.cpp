#include <iostream>
#include <string.h>

using namespace std;

int N, L;

int map[101][101];
bool check[101][101];
int answer = 0;

// row check
bool check_row(int n)
{
	for (int i = 1; i < N; i++)
	{
		if (map[n][i] - map[n][i + 1] > 1)
			return false;

		if (map[n][i] - map[n][i + 1] == 1)
		{
			int temp = i + 1;
			for (int j = temp; j < temp + L; j++)
			{
				if (check[n][j] || j > N)
					return false;
				else
					check[n][j] = true;
			}
		}
	}

	for (int i = N; i > 1; i--)
	{
		if (map[n][i] - map[n][i - 1] > 1)
			return false;

		if (map[n][i] - map[n][i - 1] == 1)
		{
			int temp = i - 1;
			for (int j = temp; j > temp - L; j--)
			{
				if (check[n][j] || j < 1)
					return false;
				else
					check[n][j] = true;
			}
		}
	}
	return true;
}

// column check
bool check_column(int n)
{
	for (int i = 1; i < N; i++)
	{
		if (map[i][n] - map[i + 1][n] > 1)
			return false;

		if (map[i][n] - map[i + 1][n] == 1)
		{
			int temp = i + 1;
			for (int j = temp; j < temp + L; j++)
			{
				if (check[j][n] || j > N)
					return false;
				else
					check[j][n] = true;
			}
		}
	}

	for (int i = N; i > 1; i--)
	{
		if (map[i][n] - map[i - 1][n] > 1)
			return false;

		if (map[i][n] - map[i - 1][n] == 1)
		{
			int temp = i - 1;
			for (int j = temp; j > temp - L; j--)
			{
				if (check[j][n] || j < 1)
					return false;
				else
					check[j][n] = true;
			}
		}
	}
	return true;
}

int main(void) 
{
	cin >> N >> L;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			cin >> map[i][j];

	for (int i = 1; i <= N; i++)
	{
		if (check_row(i))
			answer++;
	}

	memset(check, false, sizeof(check));

	for (int i = 1; i <= N; i++)
	{
		if (check_column(i))
			answer++;
	}

	cout << answer << endl;
}