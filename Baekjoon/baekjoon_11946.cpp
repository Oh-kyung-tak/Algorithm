#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

struct ss {
	int num;
	int cnt;
	int t_sum;
};

int wrong[101][16];
bool correct[101][16];
int score[101][16];
vector<ss> v;

int N, M, Q;

bool compare(ss a, ss b)
{
	if (a.cnt == b.cnt)
	{
		if (a.t_sum == b.t_sum)
			return a.num < b.num;
		else
			return a.t_sum < b.t_sum;
	}
	else
		return a.cnt > b.cnt;
}

int main()
{
	memset(wrong, 0, sizeof(wrong));
	memset(correct, false, sizeof(correct));
	memset(score, 0, sizeof(score));

	cin >> N >> M >> Q;

	for (int i = 0; i < Q; i++)
	{

		int time, n, m;
		string word;
		cin >> time >> n >> m >> word;

		if (word == "AC")
		{
			if (correct[n][m])
				continue;
			else
			{
				correct[n][m] = true;
				score[n][m] = (wrong[n][m] * 20) + time;
			}
		}
		else
		{
			if (correct[n][m])
				continue;
			else
				wrong[n][m]++;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		int cnt_sum = 0;
		int t_sum = 0;

		for (int j = 1; j <= M; j++)
		{
			cnt_sum += correct[i][j];
			t_sum += score[i][j];
		}
		
		v.push_back({ i, cnt_sum, t_sum });
	}

	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < v.size(); i++)
		cout << v[i].num << " " << v[i].cnt << " " << v[i].t_sum << endl;
}

