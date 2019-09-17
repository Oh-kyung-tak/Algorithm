#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

int N, M, L;
int ball[1001];
int cnt = 0;
int cur = 1;
int curr_cnt = 1;
int main()
{
	cin >> N >> M >> L;

	ball[1] = 1;

	while (1)
	{
		if (curr_cnt == M)
		{
			cout << cnt << endl;
			return 0;
		}

		if (curr_cnt % 2 == 1)
		{
			cur += L;
			if (cur > N)
				cur %= N;
			
			ball[cur]++;
		}
		else
		{
			cur -= L;
			if (cur < 1)
			{
				cur = -cur;
				cur %= N;
				cur = N - cur;
			}

			ball[cur]++;
		}

		curr_cnt = ball[cur];
		cnt++;
	}
}