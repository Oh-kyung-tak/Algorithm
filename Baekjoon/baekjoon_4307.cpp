#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;
int N;

int main()
{
	scanf("%d", &N);

	while (N--)
	{
		int a, b;
		int min_len = 0;
		int max_len = 0;

		scanf("%d %d", &a, &b);

		for (int i = 0; i < b; i++)
		{
			int temp;
			scanf("%d", &temp);
			
			int antmin = min(temp, a - temp);
			int antmax = max(temp, a - temp);

			min_len = max(min_len, antmin);
			max_len = max(max_len, antmax);
		}


		printf("%d %d\n", min_len, max_len);
	}
}