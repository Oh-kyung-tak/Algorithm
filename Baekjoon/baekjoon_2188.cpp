#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>

using namespace std;

int N, M;

vector<int> v[201];
int r[201];
bool visited[201];
int ans = 0;

bool check(int n)
{
	if (visited[n])
		return false;

	visited[n] = 1;

	for (int i = 0; i < v[n].size(); i++)
	{
		int want_room = v[n][i];
		if (!r[want_room] || check(r[want_room]))
		{
			r[want_room] = n;
			return true;
		}
	}
	return false;
}
int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		int t;
		cin >> t;

		for (int j = 0; j < t; j++)
		{
			int n;
			cin >> n;
			v[i].push_back(n);
		}
	}

	for (int i = 1; i <= N; i++)
	{
		memset(visited, 0, sizeof(visited));
		if (check(i))
			ans++;
	}

	cout << ans << endl;
}