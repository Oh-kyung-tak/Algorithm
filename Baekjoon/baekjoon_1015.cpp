#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

struct ss {
	int num;
	int index;
	int value;
};

bool cmp_num(ss a, ss b)
{
	if (a.num != b.num)
		return a.num < b.num;
	return a.index < b.index;
}

bool cmp_idx(ss a, ss b)
{
	return a.index < b.index;
}

vector<ss> v;
int N;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int tt;
		scanf("%d", &tt);
		v.push_back({ tt, i, 0 });
	}
	
	sort(v.begin(), v.end(), cmp_num);

	for (int i = 0; i < N; i++)
		v[i].value = i;

	sort(v.begin(), v.end(), cmp_idx);

	for (int i = 0; i < N; i++)
		cout << v[i].value << " ";
	
}

