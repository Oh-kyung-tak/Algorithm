#include <iostream>
#include <map>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int D, N;
int pizza_arr[300001];
queue<int> q;
int current;
int front;

int main()
{
	cin >> D >> N;
	
	pizza_arr[0] = 1000000001;
	for (int i = 1; i <= D; i++)
	{
		int temp;
		cin >> temp;
		pizza_arr[i] = min(temp, pizza_arr[i - 1]);
	}

	current = D;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		q.push(temp);
	}

	front = q.front();

	while (1)
	{
		if (pizza_arr[current] >= front)
		{
			q.pop();

			if (q.empty())
			{
				cout << current << endl;
				return 0;
			}
			
			current--;
			front = q.front();
		}
		else
			current--;

		if (current == 0)
		{
			cout << "0" << endl;
			return 0;
		}
	}
}
