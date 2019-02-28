#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

stack<int> s[7];
int N, P;
int cnt = 0;

int main()
{
	scanf("%d %d", &N, &P);

	for (int i = 0; i < N; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		if (s[a].empty())
		{
			cnt++;
			s[a].push(b);
		}
		else
		{
			if (s[a].top() < b)
			{
				cnt++;
				s[a].push(b);
			}
			else if(s[a].top() > b)
			{
				while (1)
				{
					if (s[a].empty())
					{
						s[a].push(b);
						cnt++;
						break;
					}

					int top = s[a].top();
					
					if (top < b)
					{
						s[a].push(b);
						cnt++;
						break;
					}
					else if (top > b)
					{
						cnt++;
						s[a].pop();
					}
					else
						break;
				}
			}
		}
	}

	printf("%d", cnt);
}
