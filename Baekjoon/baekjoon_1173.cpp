#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>

using namespace std;

int N, m, M, T, R;
bool visited[200];
int cur;
int cnt = 0;
int ex = 0;

int main()
{
	cin >> N >> m >> M >> T >> R;

	cur = m;

	if (cur + T > M)
		cout << "-1" << endl;
	else
	{
		while (1)
		{
			if (ex == N)
			{
				cout << cnt << endl;
				break;
			}

			if (cur + T <= M)
			{
				ex++;
				cnt++;
				cur += T;
			}
			else
			{
				if (cur - R <= m)
					cur = m;
				else
					cur -= R;

				cnt++;
			}
		}
	}
}