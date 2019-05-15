#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int N, M;
vector<bool> visit;
vector<int> v;
vector<int> vv;
set<string> word;

bool check_word()
{
	string temp = "";
	for (int i = 0; i < v.size(); i++)
	{
		char s = v[i] + '0';
		temp += s;
	}

	if (word.find(temp) == word.end())
	{
		word.insert(temp);
		return true;
	}
	else
		return false;
}
void dfs()
{
	if (v.size() == M)
	{
		if (check_word() == true)
		{
			for (int i = 0; i < M; i++)
				printf("%d ", v[i]);
			printf("\n");
			return;
		}

	}

	for (int i = 1; i <= N; i++)
	{
		if (visit[i] == false)
		{
			visit[i] = true;
			v.push_back(vv[i - 1]);
			dfs();
			v.pop_back();
			visit[i] = false;
		}
	}
}
int main()
{
	cin >> N >> M;
	visit = vector<bool>(N + 1, false);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		vv.push_back(temp);
	}
	sort(vv.begin(), vv.end());

	dfs();
}