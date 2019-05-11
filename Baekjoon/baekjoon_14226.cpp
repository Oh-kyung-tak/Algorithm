#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
queue<pair<int,int>> q;
int visit[2001][2001] = { 0, };
int N;
int copy = 0;
int cnt = 0;

void check_min()
{
	q.push(make_pair(1,0));
	
	while (1)
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int num = q.front().first;
			int clip = q.front().second;

			q.pop();
			visit[num][clip] = 1;

			if (num == N)
			{
				printf("%d", cnt);
				return;
			}

			q.push(make_pair(num, num));

			if (visit[num + clip][clip] == 0 && num + clip <= 1000)
			{
				q.push(make_pair(num + clip, clip));
				visit[num + clip][clip] = 1;
			}
			
			if (visit[num - 1][clip] == 0 && num - 1 > 0)
			{
				q.push(make_pair(num - 1, clip));
				visit[num - 1][clip] = 1;
			}
		}
		cnt++;
	}
}
int main()
{
	scanf("%d", &N);

	check_min();
}
