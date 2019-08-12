#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

int A, B, N, M;
int cnt = 0;
bool visited[100001];

void check(int n)
{
	queue<int> q;
	q.push(n);
	visited[n] = true;

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int temp = q.front();
			q.pop();
			
			if (temp == M)
			{
				cout << cnt << endl;
				break;
			}

			if (temp - 1 >= 0 && !visited[temp - 1])
			{
				visited[temp - 1] = true;
				q.push(temp - 1);
			}
				
			if (temp + 1 <= 100000 && !visited[temp + 1])
			{
				visited[temp + 1] = true;
				q.push(temp + 1);
			}
				
			if (temp + A <= 100000 && !visited[temp + A])
			{
				visited[temp + A] = true;
				q.push(temp + A);
			}

			if (temp * A <= 100000 && !visited[temp * A])
			{
				visited[temp * A] = true;
				q.push(temp * A);
			}
			
			if (temp - A >= 0 && !visited[temp - A])
			{
				visited[temp - A] = true;
				q.push(temp - A);
			}  

			if (temp + B <= 100000 && !visited[temp + B])
			{
				visited[temp + B] = true;
				q.push(temp + B);
			}

			if (temp * B <= 100000 && !visited[temp * B])
			{
				visited[temp * B] = true;
				q.push(temp * B);
			}

			if (temp - B >= 0 && !visited[temp - B])
			{
				visited[temp - B] = true;
				q.push(temp - B);
			}
		}
		cnt++;
	}
}
int main()
{
	cin >> A >> B >> N >> M;

	check(N);
}

