#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
int minute[101];

int main()
{
	int a, b, c;
	int T = 3;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);

	while (T--)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		for (int i = x; i < y; i++)
			minute[i]++;
	}

	for (int i = 1; i <= 100; i++)
	{
		if (minute[i] == 1)
			sum += a;
		else if (minute[i] == 2)
			sum += b * 2;
		else if (minute[i] == 3)
			sum += c * 3;
	}

	printf("%d", sum);
}
