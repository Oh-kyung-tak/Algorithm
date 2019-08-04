#include <iostream>
#include <unordered_map>
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

long long int A, B;
bool ck = false;
int cnt = 1;
//메모리가 초과되기때문에 미리 할당하지 않고 쓸때만 할당 받음.
unordered_map<long long, bool> visited;

void check(long long int n)
{
	visited[n] = true;

	queue <long long int> q;
	q.push(n);

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			long long int num = q.front();
			q.pop();

			if (num == B)
			{
				ck = true;
				return;
			}

			if (!visited[num * 2] && (num * 2 <= B))
			{
				visited[num * 2] = true;
				q.push(num * 2);
			}

			if (!visited[num * 10 + 1] && (num * 10 + 1 <= B))
			{
				visited[num * 10 + 1] = true;
				q.push(num * 10 + 1);
			}
		}
		cnt++;
	}

}
int main()
{
	cin >> A >> B;
	check(A);

	if (ck)
		cout << cnt << endl;
	else
		cout << "-1" << endl;
}