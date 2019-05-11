#include <iostream>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;
int A, B;
int visit[10001];
string s;

void check_num(int num)
{
	queue<pair<int, string>>q;
	q.push(make_pair(num, ""));
	visit[num] = 1;

	while (1)
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int current_num = q.front().first;
			string word = q.front().second;
			int l_num = 0;
			int r_num = 0;

			if (current_num == B)
			{
				printf("%s\n", word.c_str());
				return;
			}

			//CASE D
			if (current_num * 2 >= 10000)
			{
				if (visit[(current_num * 2) % 10000] == 0)
				{
					visit[(current_num * 2) % 10000] = 1;
					q.push(make_pair((current_num * 2) % 10000, word + 'D'));
				}
			}
			else
			{
				if (visit[current_num * 2] == 0)
				{
					visit[current_num * 2] = 1;
					q.push(make_pair(current_num * 2, word + 'D'));
				}
			}

			//CASE S
			if (current_num == 0)
			{
				if (visit[9999] == 0)
				{
					visit[9999] = 1;
					q.push(make_pair(9999, word + 'S'));
				}
			}
			else
			{
				if (visit[current_num - 1] == 0)
				{
					visit[current_num - 1] = 1;
					q.push(make_pair(current_num - 1, word + 'S'));
				}
			}

			//CASE L
			l_num = ((current_num % 1000) * 10) + (current_num / 1000);

			if (visit[l_num] == 0)
			{
				visit[l_num] = 1;
				q.push(make_pair(l_num, word + 'L'));
			}

			//CASE R
			r_num = ((current_num % 10) * 1000) + (current_num / 10);
			
			if (visit[r_num] == 0)
			{
				visit[r_num] = 1;
				q.push(make_pair(r_num, word + 'R'));
			}
			q.pop();
		}
	}
}

int main()
{
	int T;
	scanf("%d", &T);

	while (T--)
	{
		memset(visit, 0, sizeof(visit));
		scanf("%d %d", &A, &B);
		check_num(A);
	}
}
