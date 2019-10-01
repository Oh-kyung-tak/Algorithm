#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue>

using namespace std;

int T;
int N;

int main()
{
	cin >> T;

	while (T--)
	{
		
		priority_queue<int, vector<int>, greater<int>> pq;
		int sum = 0;

		cin >> N;
		
		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			pq.push(temp);
		}

		while (1)
		{
			if (pq.size() == 1)
			{
				if (sum == 0)
					sum = pq.top();

				break;
			}
			else
			{
				int x = pq.top();
				pq.pop();
				int y = pq.top();
				pq.pop();

				sum += x + y;
				pq.push(x + y);
			}
		}

		cout << sum << endl;
	}
	
}