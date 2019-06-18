#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

using namespace std;
vector<pair<int, int>> v;
int first[1001];
int second[1001];
int f, s;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
		first[a]++;
		second[b]++;
	}

	for (int i = 0; i < 3; i++)
	{
		if (first[v[i].first] == 1)
			f = v[i].first;

		if (second[v[i].second] == 1)
			s = v[i].second;
	}

	cout << f << " " << s << endl;
}