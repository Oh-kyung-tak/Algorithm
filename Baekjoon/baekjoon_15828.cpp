#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>

using namespace std;
queue<int> q;
int N;

int main()
{
	scanf("%d", &N);

	while (1)
	{
		int temp;
		scanf("%d", &temp);

		if (temp == -1)
			break;

		if (temp == 0)
			q.pop();
		else
		{
			if (q.size() < N)
				q.push(temp);
		}
	}
	
	if (q.empty())
		printf("empty\n");

	while (!q.empty())
	{
		printf("%d ", q.front());
		q.pop();
	}
}