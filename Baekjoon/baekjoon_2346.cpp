#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <stack>
#include <math.h>
#include <deque>

using namespace std;

deque<pair<int, int>> d;
int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		int n;
		scanf("%d", &n);
		d.push_back(make_pair(i, n));
	}

	int index = d.front().first;
	int number = d.front().second;

	d.pop_front();
	printf("%d ", index);
	while (1)
	{
		int count = 1;

		if (d.empty())
			break;

		if (number > 0)
		{
			if (count == number)
			{
				index = d.front().first;
				number = d.front().second;
				printf("%d ", index);
				d.pop_front();
			}
			else
			{
				while (count != number)
				{
					d.push_back(d.front());
					d.pop_front();
					count++;
				}
				index = d.front().first;
				number = d.front().second;
				printf("%d ", index);
				d.pop_front();
			}
		}
		else
		{
			number = abs(number);
			if (count == number)
			{
				index = d.back().first;
				number = d.back().second;
				printf("%d ", index);
				d.pop_back();
			}
			else
			{
				while (count != number)
				{
					d.push_front(d.back());
					d.pop_back();
					count++;
				}
				index = d.back().first;
				number = d.back().second;
				printf("%d ", index);
				d.pop_back();
			}
		}
	}
}
