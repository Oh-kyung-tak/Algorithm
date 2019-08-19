#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

string solution(string number, int k) {
	string answer = "";
	deque<char> q;
	int cnt = 0;

	for (int i = 0; i < number.size(); i++)
	{
		if (q.empty())
			q.push_back(number[i]);
		else
		{
			if (q.back() < number[i] && cnt < k)
			{
				char temp = number[i];
				while (1)
				{
					if (q.empty() || temp <= q.back() || cnt >= k)
					{
						q.push_back(temp);
						break;
					}

					q.pop_back();
					cnt++;
				}
			}
			else
				q.push_back(number[i]);
		}
	}

	if (cnt < k)
	{
		while (1)
		{
			if (cnt == k)
				break;

			q.pop_back();
			cnt++;
		}
	}

	while (!q.empty())
	{
		answer += q.front();
		q.pop_front();
	}

	return answer;
}