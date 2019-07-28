#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int problem[101][11];
bool sol_pro[11];
int peo_pro[11];
bool chk = true;

int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		int t;
		cin >> t;

		if (t == M || t == 0)
		{
			cout << "NO" << endl;
			return 0;
		}

		for (int j = 1; j <= M; j++)
		{
			cin >> problem[i][j];
			if (problem[i][j] == 1)
			{
				sol_pro[j] = true;
				peo_pro[i]++;
			}
		}
		peo_pro[i] = t - peo_pro[i];
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			if (peo_pro[i] == 0)
				break;

			if (problem[i][j] == -1 && sol_pro[j] == false)
			{
				sol_pro[j] = true;
				peo_pro[i]--;
			}
		}
	}
	
	for (int i = 1; i <= M; i++)
	{
		if (!sol_pro[i])
		{
			chk = false;
			break;
		}
	}

	if (chk == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}