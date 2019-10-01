#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int C;
double N, L;
double festival[1001];
double min_cost = 99999999999;

int main()
{
	cin >> C;

	while (C--)
	{
		cin >> N >> L;
		memset(festival, 0, sizeof(festival));
		min_cost = 99999999999;

		for (int i = 1; i <= N; i++)
			cin >> festival[i];

		for (int i = 1; i <= (N - L) + 1; i++)
		{
			double sum = 0;
			double cnt = 0;
			for (int j = i; j <= N; j++)
			{
				sum += festival[j];
				cnt++;

				if (cnt >= L)
					min_cost = min(min_cost, sum / cnt);
			}
		}

		cout << fixed;
		cout.precision(10);
		cout << min_cost << endl;
	}
}