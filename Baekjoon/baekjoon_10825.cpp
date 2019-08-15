#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

struct score {
	string name;
	int kor;
	int eng;
	int math;
};

vector<score> v;
int N;

bool cmp(score a, score b)
{
	if (a.kor == b.kor)
	{
		if (a.eng == b.eng)
		{
			if (a.math == b.math)
			{
				return a.name < b.name;
			}
			else
				return a.math > b.math;
		}
		else
			return a.eng < b.eng;
	}
	else
		return a.kor > b.kor;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string t;
		int k, e, m;
		cin >> t >> k >> e >> m;
		v.push_back({ t,k,e,m });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < N; i++)
		cout << v[i].name << '\n';
}
