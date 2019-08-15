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

struct pic {
	int num;
	int time;
	int recommand;
};

bool cmp(pic a, pic b)
{
	if (a.recommand == b.recommand)
		return a.time > b.time;
	else
		return a.recommand > b.recommand;
}

bool idx_cmp(pic a, pic b)
{
	return a.num < b.num;
}

int N;
int M;
vector<pic> v;

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= M; i++)
	{
		int temp;
		cin >> temp;
		bool ck = false;

		for (int j = 0; j < v.size(); j++)
		{
			if (v[j].num == temp)
			{
				v[j].recommand++;
				ck = true;
			}
		}
		
		if (ck)
			continue;

		if (v.size() >= N)
		{
			sort(v.begin(), v.end(), cmp);
			v.pop_back();
		}
		
		v.push_back({ temp, i, 1 });
	}
	
	sort(v.begin(), v.end(), idx_cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i].num << " ";
	
}
