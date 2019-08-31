#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> works) {
	long long answer = 0;
	priority_queue<int> pq;

	for (int i = 0; i < works.size(); i++)
		pq.push(works[i]);

	for (int i = 0; i < n; i++)
	{
		int temp = pq.top();
		if (temp > 0)
		{
			pq.pop();
			pq.push(temp - 1);
		}
		else
			break;
	}

	while (!pq.empty())
	{
		if (pq.top() > 0)
		{
			answer += pow(pq.top(), 2);
			pq.pop();
		}
		else
			break;
	}

	return answer;
}