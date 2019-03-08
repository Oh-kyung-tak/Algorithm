#include <iostream>
#include <queue>

using namespace std;

int family[101][101];
int n;
int first, second;
int m;
int visit[101];

void bfs()
{	
	int c = 0;
	queue<int> q;

	q.push(first);
	visit[first] = 1;

	while (1)
	{
		if (q.empty())
		{
			printf("-1");
			return;
		}

		int size = q.size();
		
		for (int i = 0; i < size; i++)
		{
			int current = q.front();
			q.pop();

			if (current == second)
			{
				printf("%d", c);
				return;
			}

			for (int j = 1; j <= n; j++)
			{
				if (family[current][j] == 1 && visit[j] == 0)
				{
					q.push(j);
					visit[j] = 1;
				}
			}
			
		}
		c++;
	}
}

int main()
{
	scanf("%d", &n);
	scanf("%d %d", &first, &second);
	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		family[a][b] = 1;
		family[b][a] = 1;
	}

	bfs();
}
