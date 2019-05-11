#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
	int N;
	scanf("%d", &N);

	while (N--)
	{
		int day;
		long long int sum = 0;
		long long int max_price;
		stack<long long int> s;
		scanf("%d", &day);

		for (int i = 0; i < day; i++)
		{
			long long int price;
			scanf("%lld", &price);
			s.push(price);
		}

		while (1)
		{
			if (s.empty())
				break;

			max_price = s.top();
			s.pop();

			if (s.empty())
				break;

			while (s.top() <= max_price)
			{
				sum += max_price - s.top();
				s.pop();

				if (s.empty())
					break;
			}
		}

		printf("%lld\n", sum);
	}
}
