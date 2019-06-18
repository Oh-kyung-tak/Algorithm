#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#define MAX 100001

using namespace std;

bool visited[MAX];
int parent[MAX];
int s_num, f_num;
int cnt = 0;
queue<pair<int, int>> q;
vector<int> road;

//런타임 에러 해결방법 ck[-1]이 될때 런타임이 뜨므로 해결해야함
int main()
{
	scanf("%d %d", &s_num, &f_num);

	q.push({ s_num, 0});
	visited[s_num] = true;

	while (!q.empty())
	{
		int c_loc = q.front().first;
		int c_sec = q.front().second;

		q.pop();

		if (c_loc == f_num)
		{
			int idx = c_loc;

			while (idx != s_num)
			{
				road.push_back(idx);
				idx = parent[idx];
			}
			road.push_back(s_num);
			break;
		}

		if (c_loc + 1 <= 100000 && !visited[c_loc + 1])
		{
			q.push({ c_loc + 1, c_loc});
			visited[c_loc + 1] = 1;
			parent[c_loc + 1] = c_loc;
		}
			
		if (c_loc - 1 >= 0 && !visited[c_loc - 1])
		{
			q.push({ c_loc - 1, c_loc});
			visited[c_loc - 1] = 1;
			parent[c_loc - 1] = c_loc;
		}

		if (c_loc * 2 <= 100000 && !visited[c_loc * 2])
		{
			q.push({ c_loc * 2, c_loc });
			visited[c_loc * 2] = 1;
			parent[c_loc * 2] = c_loc;
		}
	}

	cout << road.size() - 1 << endl;
	for (int i = road.size() - 1; i >= 0; i--)
		cout << road[i] << " ";
}