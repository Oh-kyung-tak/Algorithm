#include <iostream>
#include <vector>

using namespace std;

int N;
int ar[1001][6];
bool visited[1001][1001];

// 모두 안 겹치는 경우가 있을 수 있으므로 ans 초기화 1로 해줌
int max_cnt = 0;
int ans = 1;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= 5; j++)
			cin >> ar[i][j];
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= N - 1; j++)
		{
			for (int k = j + 1; k <= N; k++)
			{
				if (ar[j][i] == ar[k][i])
				{
					visited[j][k] = true;
					visited[k][j] = true;
				}
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		int temp = 0;
		for (int j = 1; j <= N; j++)
		{
			if (visited[i][j])
				temp++;
		}

		if (temp > max_cnt)
		{
			max_cnt = temp;
			ans = i;
		}
	}

	cout << ans << endl;
}