#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int N, L, R, X;
int problem[16];
int cnt_n = 0;

void check(int cnt, int sum, int min_p, int max_p)
{
	if (cnt == N)
	{
		if (sum >= L && sum <= R && (max_p - min_p) >= X)
			cnt_n++;

		return;
	}

	check(cnt + 1, sum + problem[cnt + 1], min(min_p, problem[cnt + 1]), max(max_p, problem[cnt + 1]));
	check(cnt + 1, sum, min_p, max_p);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> L >> R >> X;

	for (int i = 1; i <= N; i++)
		cin >> problem[i];

	check(0, 0, 999999999, -1);

	cout << cnt_n << endl;
}