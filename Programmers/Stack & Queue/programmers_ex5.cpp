#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	queue<int> q;

	int size = progresses.size();

	for (int i = 0; i < size; i++)
	{
		int temp = (100 - progresses[i]) / speeds[i];

		if ((100 - progresses[i]) % speeds[i] != 0)
			temp++;

		q.push(temp);
	}

	int cnt = 1;
	int current = q.front();
	q.pop();

	while (!q.empty())
	{
		if (q.front() <= current)
		{
			cnt++;
		}
		else
		{
			answer.push_back(cnt);
			cnt = 1;
			current = q.front();
		}

		q.pop();
	}

	answer.push_back(cnt);

	return answer;
}