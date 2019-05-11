#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>


using namespace std;
queue<int> q;

int main()
{
	int n, w, l, t, cnt = 0, sum = 0;
	scanf("%d %d %d", &n, &w, &l);

	while (n--)
	{
		scanf("%d", &t);

		while (1)
		{
			if (q.empty())
			{
				q.push(t);
				sum += t;
				cnt++;
				break;
			}
			else if (q.size() == w)
			{
				sum -= q.front(); q.pop();
			}
			else
			{
				if (sum + t > l)
				{
					q.push(0);
					cnt++;
				}
				else
				{
					sum += t;
					q.push(t);
					cnt++;
					break;
				}
			}
		}
	}

	printf("%d", cnt + w);

}
