#include <string>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

	while (1)
	{
		if (pq.size() == 1 && pq.top() < K)
			return -1;

		int first = pq.top();
		pq.pop();

		int second = pq.top();
		pq.pop();

		if (first >= K)
			return answer;

		pq.push(first + (second * 2));
		answer++;
	}
}