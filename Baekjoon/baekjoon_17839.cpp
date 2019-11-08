#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <set>
#include <string.h>

using namespace std;

int N;
map<string, vector<string>> m;
map<string, int> check;
set<string> s;
vector<string> v;

void dfs(string start)
{
	for (int i = 0; i < m[start].size(); i++)
	{
		s.insert(m[start][i]);
		if (!check[m[start][i]])
		{
			check[m[start][i]] = 1;
			dfs(m[start][i]);
		}
	}
}

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		char a[12];
		char b[12];
		scanf("%s is %s", a, b);
		m[a].push_back(b);
	}

	dfs("Baba");

	set<string>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
		printf("%s\n", iter->c_str());
}