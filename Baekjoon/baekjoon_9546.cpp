#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;
int main() 
{	
	int T;

	scanf("%d", &T);
	
	while (T--)
	{
		int k;
		int sum = 0;
		int count = 1;
		scanf("%d", &k);

		for (int i = 1; i <= k; i++)
		{
			sum += count;
			count *= 2;
		}

		printf("%d\n", sum);
	}
}
