#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;


vector<int> solution(vector<string> operations) {
	vector<int> answer;
	deque<int> dq;

	for (int i = 0; i < operations.size(); i++)
	{
		if (operations[i][0] == 'I')
		{
			int temp = stoi(operations[i].substr(2));
			dq.push_back(temp);
			sort(dq.begin(), dq.end());
		}
		else
		{
			int temp = stoi(operations[i].substr(2));
			
			if (!dq.empty())
			{
				if (temp == 1)
					dq.pop_back();
				else
					dq.pop_front();
			}
		}
	}

	if (dq.empty())
	{
		answer.push_back(0);
		answer.push_back(0);
	}
	else
	{
		answer.push_back(dq.back());
		answer.push_back(dq.front());
	}
	return answer;
}