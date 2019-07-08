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
int num[21];
int count_num = 0;
int N, M;

void dfs(int cnt, int sum)
{
	if (cnt == N + 1)
	{
		if (sum == M)
			count_num++;

		return;
	}

	dfs(cnt + 1, sum + num[cnt]);
	dfs(cnt + 1, sum);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		
		count_num = 0;

		cin >> N >> M;
		for (int i = 1; i <= N; i++)
			cin >> num[i];
		
		dfs(1, 0);
		cout << "#" << Test_case << " " << count_num << endl;
	}
}