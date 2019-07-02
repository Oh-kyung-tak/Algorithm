#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int N, sum;
vector < pair<int, int>> v;
int max_cnt = 0;

void check(int cnt, int first_sum, int sec_sum)
{
	if (sec_sum > sum)
		return;

	if (cnt == N)
	{
		if (sec_sum <= sum)
			max_cnt = max(max_cnt, first_sum);

		return;
	}
	check(cnt + 1, first_sum + v[cnt].first, sec_sum + v[cnt].second);
	check(cnt + 1, first_sum, sec_sum);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		max_cnt = 0;
		v.clear();

		cin >> N >> sum;

		for (int i = 0; i < N; i++)
		{
			int a, b;
			cin >> a >> b;
			v.push_back({ a,b });
		}
		
		check(0, 0, 0);

		cout << '#' << Test_case << " " << max_cnt << endl;
	}
}