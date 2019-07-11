#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int solution(string name) {
	int answer = 0;
	int sum = 0;
	int dis_sum = 0;
	int cursor = 0;

	int sss[21];
	deque<int> dq;

	for (int i = 0; i < name.size(); i++)
		sss[i] = min(name[i] - 'A', ('Z' - name[i]) + 1);

	for (int i = 0; i < name.size(); i++)
	{
		sum += sss[i];
		if (name[i] != 'A' && i != 0)
			dq.push_back(i);
	}

	while (!dq.empty())
	{
		int a = dq.front();
		int b = dq.back();
		int size = name.size() - 1;
		int r, l;

		if (cursor < a)
		{
			r = a - cursor;
			l = cursor + size - b + 1;
		}
		else
		{
			r = a + size - cursor + 1;
			l = cursor - b;
		}

		if (r < l)
		{
			dis_sum += r;
			cursor = a;
			dq.pop_front();
		}
		else
		{
			dis_sum += l;
			cursor = b;
			dq.pop_back();
		}
	}

	answer = sum + dis_sum;

	return answer;
}