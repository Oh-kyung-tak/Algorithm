#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int T;

int main()
{
	scanf("%d", &T);

	while (T--)
	{
		int num;
		int sum = 0;

		scanf("%d", &num);

		while (num--)
		{
			int max_price = -99999999;
			for (int i = 0; i < 3; i++)
			{
				int price;
				scanf("%d", &price);
				max_price = max(max_price, price);
			}

			if (max_price >= 0)
				sum += max_price;
		}
		printf("%d\n", sum);
	}
}
