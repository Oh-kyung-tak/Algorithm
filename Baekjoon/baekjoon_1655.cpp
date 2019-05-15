#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <stack>
#include <math.h>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;
priority_queue<int, vector<int>, less<int>> max_h;
priority_queue<int, vector<int>, greater<int>> min_h;

int N;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);

		if (max_h.empty())
			max_h.push(temp);
		else if (max_h.size() == min_h.size())
			max_h.push(temp);
		else
			min_h.push(temp);

		if (!max_h.empty() && !min_h.empty() && (max_h.top() > min_h.top()))
		{
			int t1 = max_h.top();
			int t2 = min_h.top();

			max_h.pop();
			min_h.pop();

			max_h.push(t2);
			min_h.push(t1);
		}

		printf("%d\n", max_h.top());
	}
}