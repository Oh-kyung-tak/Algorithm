#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
	int answer = 0;
	int cnt = 0;

	priority_queue<int, vector<int>, less<int>> pq;
	for (int i = 0; i < k; i++)
	{
		if (dates[cnt] == i)
		{
			pq.push(supplies[cnt]);

			if (cnt != supplies.size() - 1)
				cnt++;
		}
		
		if (stock == 0)
		{
			stock += pq.top();
			pq.pop();
			answer++;
		}

		stock--;
	}
		return answer;
}