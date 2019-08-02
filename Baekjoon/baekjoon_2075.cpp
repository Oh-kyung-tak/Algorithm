#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;
priority_queue<int, vector<int>, greater<int> > pq;

int N;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int tt;
			scanf("%d", &tt);

			if (pq.size() != N)
				pq.push(tt);
			else
			{
				if (pq.top() < tt)
				{
					pq.pop();
					pq.push(tt);
				}
			}
		}
	}

	cout << pq.top() << endl;
}