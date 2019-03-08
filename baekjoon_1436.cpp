#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;

int n;

int main() 
{	
	int N;
	int count = 0;
	int num = 666;

	scanf("%d", &N);

	while(1)
	{
		int tempnum = num;
		int sixcount = 0;
		int check = 1;

		while (tempnum > 0)
		{
			if (tempnum % 10 == 6)
			{
				sixcount++;
				check = 1;
			}
			else if(sixcount < 3)
			{
				check = 0;
				sixcount = 0;
			}
			tempnum /= 10;
		}

		if (sixcount >= 3)
			count++;
		
		if (count == N)
		{
			printf("%d", num);
			break;
		}
		num++;
	}
}
