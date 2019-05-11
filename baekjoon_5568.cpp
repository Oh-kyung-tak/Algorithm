#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;
int N, K;
int card[11];
int visited[11];
map<string, int> m;

void dfs(int cnt, string s)
{
	if (cnt == K)
	{
		if (!m[s])
			m[s]++;
		
		return;
	}

	if (cnt > N)
		return;

	for (int i = 1; i <= N; i++)
	{
		if (visited[i])
			continue;
		visited[i] = true;
		dfs(cnt + 1, s + to_string(card[i]));
		visited[i] = false;
	}
}

int main()
{
	cin >> N;
	cin >> K;
	
	for (int i = 1; i <= N; i++)
		cin >> card[i];

	dfs(0, "");

	cout << m.size() << endl;
}

