#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>
#include <set>
#include <map>

using namespace std;

int N;
priority_queue<int, vector<int>, greater<int> > pq;
int sum = 0;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		pq.push(temp);
	}
	
	if (pq.size() == 1)
		cout << "0" << endl;
	else
	{
		while (!pq.empty())
		{
			int a = pq.top();
			pq.pop();
			int b = pq.top();
			pq.pop();

			sum += (a + b);

			if (pq.empty())
				break;

			pq.push(a + b);
		}

		cout << sum << endl;
	}
}