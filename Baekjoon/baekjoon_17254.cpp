#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;

struct ss {
	int x;
	int y;
	char c;
};

vector<ss> v;

bool cmp(ss a, ss b)
{
	if (a.x == b.x)
		return a.y < b.y;
	else
		return a.x < b.x;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int x, y;
		char c;
		cin >> x >> y >> c;
		v.push_back({ y,x,c });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i].c;
}

