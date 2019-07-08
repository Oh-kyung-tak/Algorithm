#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

int T;
int N;
int chess[15];
int cnt = 0;

bool find(int i)
{
	for (int j = 0; j < i; j++)
	{
		if (chess[j] == chess[i] || abs(chess[i] - chess[j]) == (i - j))
			return false;
	}
	return true;
}

void check_q(int i)
{
	if (i == N)
		cnt++;
	else
	{
		for (int j = 0; j < N; j++)
		{
			chess[i] = j;
			if (find(i))
				check_q(i + 1);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{

		cnt = 0;

		cin >> N;
		check_q(0);

		cout << "#" << Test_case << " " << cnt << endl;
	}
}