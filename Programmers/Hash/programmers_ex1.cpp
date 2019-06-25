#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
	queue<pair<int, int>> q;
	int answer = 1;
	int cur_num = priorities.size() - 1;

	for (int i = 0; i < priorities.size(); i++)
		q.push({ priorities[i], i });

	sort(priorities.begin(), priorities.end());

	while (1)
	{
		int x = q.front().first;
		int loc = q.front().second;
		q.pop();

		if (loc == location && priorities[cur_num] == x)
			break;

		if (x == priorities[cur_num])
		{
			answer++;
			cur_num--;
		}
		else
			q.push({ x, loc });

	}

	return answer;
}