#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>

// 위상정렬 연습
using namespace std;

int degree[32001];
vector<int> v[32001];
queue<int> q;

int N, M, A, B;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		degree[B]++;
		v[A].push_back(B);
	}
	
	for (int i = 1; i <= N; i++)
		if (degree[i] == 0)
			q.push(i);

	while (!q.empty())
	{
		int i = q.front();
		q.pop();
		cout << i << " ";

		for (int j = 0; j < v[i].size(); j++)
			if (--degree[v[i][j]] == 0)
				q.push(v[i][j]);
	}
}