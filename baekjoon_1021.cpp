#include <iostream>
#include <deque>
#include <string>
#include <vector>

using namespace std;

deque<int> q;
vector<int> v;

int main()
{
	int N, M;
	int totalcount = 0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	for (int i = 1; i <= N; i++)
		q.push_back(i);
	
	for (int i = 0; i < M; i++)
	{
		deque<int> q1 = q;
		deque<int> q2 = q;
		int q1_count = 0;
		int q2_count = 0;

		while (q1.front() != v[i])
		{
			q1_count++;
			q1.push_back(q1.front());
			q1.pop_front();
		}

		while (q2.front() != v[i])
		{
			q2_count++;
			q2.push_front(q2.back());
			q2.pop_back();
		}
		
		if (q1_count >= q2_count)
		{
			q2.pop_front();
			totalcount += q2_count;
			q = q2;
		}
		else
		{
			q1.pop_front();
			totalcount += q1_count;
			q = q1;
		}	
	}

	printf("%d", totalcount);
}
