#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int N, M;
int weight[31];
int find_weight[8];
bool visited[31][16000];

void solve(int cnt, int w)
{
	if (cnt > N)
		return;

	if (visited[cnt][w])
		return;

	visited[cnt][w] = true;

	solve(cnt + 1, w + weight[cnt]);
	solve(cnt + 1, w);
	solve(cnt + 1, abs(w - weight[cnt]));
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> weight[i];

	cin >> M;

	for (int i = 0; i < M; i++)
		cin >> find_weight[i];

	solve(0,0);

	for (int i = 0; i < M; i++)
	{
		if (find_weight[i] > 500 * 30)
			cout << "N" << " ";
		else if (visited[N][find_weight[i]] == true)
			cout << "Y" << " ";
		else
			cout << "N" << " ";
	}
}
