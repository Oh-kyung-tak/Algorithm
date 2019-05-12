#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

vector<pair<int, int>> v;
int N;

void check(int N, int from, int by, int to)
{
	if (N == 1)
		v.push_back(make_pair(from, to));
	else
	{
		check(N - 1, from, to, by);
		v.push_back(make_pair(from, to));
		check(N - 1, by, from, to);
	}
}
int main()
{
	cin >> N;

	check(N, 1, 2, 3);

	printf("%d\n", v.size());
	for (int i = 0; i < v.size(); i++)
		printf("%d %d\n", v[i].first, v[i].second);
}