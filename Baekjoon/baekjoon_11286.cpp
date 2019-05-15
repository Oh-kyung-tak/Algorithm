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
priority_queue<int, vector<int>, greater<int>> positive;
priority_queue<int, vector<int>, greater<int>> negative;

int N;

int main()
{
	scanf("%d", &N);

	while (N--)
	{
		int temp;
		scanf("%d", &temp);

		if (temp > 0)
			positive.push(temp);
		else if(temp < 0)
			negative.push(abs(temp));
		else
		{
			if (negative.empty())
			{
				if (positive.empty())
					printf("0\n");
				else
				{
					printf("%d\n", positive.top());
					positive.pop();
				}
			}
			else if (positive.empty())
			{
				if (negative.empty())
					printf("0\n");
				else
				{
					printf("%d\n", negative.top() * -1);
					negative.pop();
				}
			}
			else if (!negative.empty() && !positive.empty())
			{
				int t1 = negative.top();
				int t2 = positive.top();

				if (t1 <= t2)
				{
					printf("%d\n", negative.top() * -1);
					negative.pop();
				}
				else
				{
					printf("%d\n", positive.top());
					positive.pop();
				}
			}
		}
	}
}