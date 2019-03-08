#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int M, n;
	int x = 0, y = 0, direction = 0;
	
	scanf("%d %d", &M, &n);
	
	for (int i = 0; i < n; i++)
	{
		string order;
		int num;
		cin >> order >> num;

		if (order == "TURN")
		{
			if (num == 0)
			{
				if (direction != 3)
					direction += 1;
				else if (direction == 3)
					direction = 0;
			}
			else
			{
				if (direction != 0)
					direction -= 1;
				else if (direction == 0)
					direction = 3;
			}
		}
		else
		{
			if (direction == 0)
				x += num;
			else if (direction == 1)
				y += num;
			else if (direction == 2)
				x -= num;
			else if (direction == 3)
				y -= num;
		}

		if (x < 0 || y < 0 || x > M || y > M)
		{
			printf("-1");
			return 0;
		}
	}

	printf("%d %d", x, y);
}
