#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
int num;
int stick = 64;
int sum = 64;
int c = 0;

int main()
{
	scanf("%d", &num);
	
	while (1)
	{
		c++;
		stick /= 2;
	
		if (sum == num)
		{
			printf("%d", c);
			break;
		}

		if (sum - stick >= num)
		{
			sum -= stick;
			c--;
		}
	}
}
