#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int main() 
{
	while (1)
	{
		int num;
		int sum = 0;

		scanf("%d", &num);

		if (num == 0)
			break;

		while (1)
		{
			if (num == 0)
				break;

			sum += num * num;
			num--;
			
		}
		printf("%d\n", sum);
	}
}
